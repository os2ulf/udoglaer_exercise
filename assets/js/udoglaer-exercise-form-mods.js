/**
 * @file
 * Logic for the exercise node form.
 *
 * Change sub target-group selection based on primary target-group.
 * Stolen from udoglaer_forms module but implemented separately for this content type
 * to maintain modularity in the project.
 */
(function ($) {
  // Called when the document has finished loading.
  Drupal.behaviors.udoglaerExerciseFormAlter = {
    attach: function (context, settings) {
      // Array to hold subgroup checkboxes
      var subgroup = [];

      /**
       * Initialize the form by hiding elements and attaching event handlers.
       */
      function initializeFormElements() {
        // Hide all target subgroups.
        $('.field-name-field-target-group-sub input').parent().hide();

        // Listen to change event on "target group" radio buttons in edit user
        // form and change form content based on the selection. This is also
        // called directly to be initialized on load.
        $('.field-name-field-target-group').change(targetGroupSelectionChanged);
        targetGroupSelectionChanged();
      }

      /**
       * Displays/hides Target Subgroup divs according to the callback function.
       *
       * @param {function} accept_callback
       *   The function that decided if the text is accepted or rejected.
       */
      function displayRelevantSubgroupByKeyword(accept_callback) {
        // Iterate each subgroup input.
        $.each(subgroup, function (index, arr) {
          var text = arr[0];
          var value = arr[1];

          // If the accept_callback, accepts the text show the input, else hide
          // and uncheck the field.
          var field = $('.field-name-field-target-group-sub input[value=' + value + ']');
          if (accept_callback(text)) {
            field.parent().show();
          }
          else {
            field.prop("checked", false);
          }
        });
      }

      /**
       * Clear subjects and educational goals field field values.
       */
      function clearSubjectsValues(fieldValue) {
        $('.field-name-field-' + fieldValue + ' input').prop("checked", false);
      }

      /**
       * Sets up available fields when Preschool is selected.
       */
      function selectionPreschool() {
        $('#edit-field-educational-goals').show();
        $('#edit-field-subjects-youth').hide();
        $('#edit-field-subjects-primary-school').hide();

        clearSubjectsValues('subjects-youth');
        clearSubjectsValues('subjects-primary-school');

        // The sub target group field selection values.
        displayRelevantSubgroupByKeyword(function (text) {
          return text.indexOf('år') != -1 || text.indexOf('Børn og unge med særlige behov') != -1;
        });
      }

      /**
       * Sets up available fields when Primary School is selected.
       */
      function selectionPrimarySchool() {
        $('#edit-field-educational-goals').hide();
        $('#edit-field-subjects-youth').hide();
        $('#edit-field-subjects-primary-school').show();

        clearSubjectsValues('educational-goals');
        clearSubjectsValues('subjects-youth');

        // The sub target group field selection values.
        displayRelevantSubgroupByKeyword(function (text) {
          return text.indexOf('klasse') != -1 || text.indexOf('DUS') != -1 || text.indexOf('Børn og unge med særlige behov') != -1;
        });
      }

      /**
       * Sets up available fields when Youth is selected.
       */
      function selectionYouth() {
        $('#edit-field-educational-goals').hide();
        $('#edit-field-subjects-primary-school').hide();
        $('#edit-field-subjects-youth').show();

        clearSubjectsValues('educational-goals');
        clearSubjectsValues('subjects-primary-school');
        // The sub target group field selection values.
        displayRelevantSubgroupByKeyword(function (text) {
          return (text.indexOf('år') == -1 && text.indexOf('klasse') == -1 && text.indexOf('DUS') == -1);
        });
      }

      /**
       * Handle logic when Target Group selector is changed.
       */
      function targetGroupSelectionChanged() {
        // Hide all target subgroups.
        $('.field-name-field-target-group-sub input').parent().hide();
        // Fill the subgroup array, if no already done. Used in the
        // sub-selection function in the switch statement below.
        if (subgroup.length === 0) {
          $('.field-name-field-target-group-sub .option').each(function () {
            var val = $(this).siblings('input').val();
            var text = $(this).text();
            subgroup.push([text, val]);
          });
        }

        // Change form input elements based on selected target group.
        var selected = $(':checked', $('.field-name-field-target-group')).next().text().trim();
        switch (selected) {
          case 'Dagtilbud':
            selectionPreschool();
            break;

          case 'Grundskole':
            selectionPrimarySchool();
            break;

          case 'Ungdomsuddannelse':
            selectionYouth();
            break;

          default:
            // When the edit node page is first loaded (for new nodes) the
            // selection is empty and we fallback to "pre-school".
            // This should not happen - ever.
            selectionPreschool();
            break;
        }
      }
      // Get the show on the road.
      initializeFormElements();

    }
  };

}(jQuery));
