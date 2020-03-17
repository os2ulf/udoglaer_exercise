# UdogLaer exercise

## UdogLaer project relation
- Optional module

## Installation
- Enable module
- Set template location in settings.php
- Empty cache
- Rebuild secure permissions
- Import search index config defined in assets.
- Add "lejrskole" to user filter in search api config for user index.

## Description
- Adds exercise content type and related functionality
- assets/search-index-definition.json holds index configuration for
  search server.
- templates/search/* holds search templates used for displaying angular
  content for exercises. The panel pane configuration expects these
  templates to be located in sites/default/files/templates/ this
  location may be overridden in settings.php.

## Coding standards

```sh
composer install
composer check-coding-standards
```
