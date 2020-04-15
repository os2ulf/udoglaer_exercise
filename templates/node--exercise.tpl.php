<?php
/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
<div class="layout-node">
  <div class="layout-element-alpha">
    <div class="layout-element-alpha-inner">
      <?php if ($display_submitted): ?>
        <div class="submitted">
          <?php print $submitted; ?>
        </div>
      <?php endif; ?>
      <div class="content is-exercise">
        <div class="content--image">
          <h1 class="field--title is-exercise"><?php print render($title); ?></h1>
          <?php print render($content['field_image']); ?>
        </div>
        <div class="content--main">
          <div>
            <h2><?php print t('The exercise'); ?></h2>
            <?php print render($content['field_full_description']); ?>
          </div>
          <?php if (
            !empty($field_how_to) ||
            !empty($field_background_knowledge) ||
            !empty($field_activities) ||
            !empty($field_post_work) ||
            !empty($field_material_suggestions) ||
            !empty($field_related_content)) : ?>
            <div>
              <h2><?php print t('How to'); ?></h2>
              <?php print render($content['field_how_to']); ?>
              <?php print render($content['field_background_knowledge']); ?>
              <?php print render($content['field_activities']); ?>
              <?php print render($content['field_post_work']); ?>
              <?php print render($content['field_material_suggestions']); ?>
            </div>
          <?php endif; ?>
          <div>
            <h2><?php print t('Purpose'); ?></h2>
            <?php print render($content['field_purpose']); ?>
          </div>
          <?php print render($content['field_video']); ?>
          <?php print render($content['field_educational_material']); ?>
          <?php print render($content['field_related_content']); ?>
          <div class="block--pdf">
            <a class="block--pdf-link" target="_blank" href="/printpdf/<?php print $node->nid; ?>"><?php print t('Save this offer as pdf'); ?></a>
          </div>
        </div>
        <div class="content--meta">
          <div class="block--light">
            <h2 class="block--header">
              <?php print t('Practical information'); ?>
            </h2>
            <div class="block--content">
              <div class="block--field-wrapper is-inline">
                <?php if (!empty($view__target_group_sub)) : ?>
                  <div class="block--field-label"><?php print t('Target group');?></div>
                  <div class="block--field-text"><?php print render($view__target_group_sub); ?></div>
                <?php endif;?>
                <?php print render($content['field_activity_select']); ?>
              </div>
              <div class="block--field-wrapper">
                <?php if(empty($field_period_select)) : ?>
                  <div class="block--field-label"><?php print t('Period'); ?></div>
                  <div class="block--field-text"><?php print t('All year'); ?></div>
                <?php else : ?>
                  <?php print render($content['field_period_select']); ?>
                <?php endif; ?>
              </div>
                <div class="block--field-wrapper">
                  <?php print render($content['field_duration_select']); ?>
                  <div class="block--field-text"><?php print render($content['field_duration_description']); ?></div>
                </div>
              <div class="block--field-wrapper">
                <?php print render($content['field_subject']); ?>
              </div>
              <div class="block--field-wrapper">
                <?php if ($field_educational_goals || $field_subjects_primary_school || $field_subjects_youth) : ?>
                  <div class="block--field-wrapper">
                    <?php print render($content['field_subjects_primary_school']); ?>
                    <?php print render($content['field_subjects_youth']); ?>
                    <?php print render($content['field_educational_goals']); ?>
                  </div>
                <?php endif; ?>
              </div>
            </div>
          </div>
          <?php if(!empty($field_related_users)) : ?>
            <div class="block--dark">
              <h2 class="block--header">
                <?php print t('Visiting sites');?>
              </h2>
              <div class="block--content">
                <?php print render($content['field_related_users']); ?>
              </div>
            </div>
          <?php endif; ?>
        </div>
      </div>
      <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);

      // Hide target group sub. It's provided by a view.
      hide($content['field_target_group_sub']);
      ?>
      <div style=""><?php print render($content); ?></div>
    </div>
  </div>
</div>
