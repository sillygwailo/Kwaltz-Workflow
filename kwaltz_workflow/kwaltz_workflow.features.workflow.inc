<?php

/**
 * Helper to implementation of hook_workflow_defaults().
 */
function _kwaltz_workflow_workflow_defaults() {
 $defaults = array();
  $defaults[] = array(
    'name' => 'Moderation',
    'machine_name' => 'moderation',
    'tab_roles' => array(
      '0' => 'Moderator',
      '1' => 'Publisher',
      '2' => 'Writer',
    ),
    'options' => array(
      'comment_log_node' => 1,
      'comment_log_tab' => 1,
    ),
    'states' => array(
      '1' => array(
        'ref' => '1',
        'module' => 'kwaltz_workflow',
        'state' => '(creation)',
        'weight' => '-50',
        'sysid' => '1',
        'status' => '1',
        'access' => array(),
      ),
      '2' => array(
        'ref' => '2',
        'module' => 'kwaltz_workflow',
        'state' => 'Draft',
        'weight' => '-10',
        'sysid' => '0',
        'status' => '1',
        'access' => array(
          '0' => array(
            'role' => 'Writer',
            'grant_view' => '0',
            'grant_update' => '1',
            'grant_delete' => '0',
          ),
          '1' => array(
            'role' => 'Publisher',
            'grant_view' => '0',
            'grant_update' => '0',
            'grant_delete' => '0',
          ),
          '2' => array(
            'role' => 'Moderator',
            'grant_view' => '0',
            'grant_update' => '0',
            'grant_delete' => '0',
          ),
          '3' => array(
            'role' => 'authenticated user',
            'rid' => '2',
            'grant_view' => '1',
            'grant_update' => '0',
            'grant_delete' => '0',
          ),
          '4' => array(
            'role' => 'anonymous user',
            'rid' => '1',
            'grant_view' => '1',
            'grant_update' => '0',
            'grant_delete' => '0',
          ),
          '5' => array(
            'role' => 'author',
            'rid' => '-1',
            'grant_view' => '0',
            'grant_update' => '0',
            'grant_delete' => '0',
          ),
        ),
      ),
      '3' => array(
        'ref' => '3',
        'module' => 'kwaltz_workflow',
        'state' => 'In Moderation',
        'weight' => '-2',
        'sysid' => '0',
        'status' => '1',
        'access' => array(
          '0' => array(
            'role' => 'Writer',
            'grant_view' => '0',
            'grant_update' => '0',
            'grant_delete' => '0',
          ),
          '1' => array(
            'role' => 'Publisher',
            'grant_view' => '0',
            'grant_update' => '0',
            'grant_delete' => '0',
          ),
          '2' => array(
            'role' => 'Moderator',
            'grant_view' => '0',
            'grant_update' => '1',
            'grant_delete' => '0',
          ),
          '3' => array(
            'role' => 'authenticated user',
            'rid' => '2',
            'grant_view' => '1',
            'grant_update' => '0',
            'grant_delete' => '0',
          ),
          '4' => array(
            'role' => 'anonymous user',
            'rid' => '1',
            'grant_view' => '1',
            'grant_update' => '0',
            'grant_delete' => '0',
          ),
          '5' => array(
            'role' => 'author',
            'rid' => '-1',
            'grant_view' => '0',
            'grant_update' => '0',
            'grant_delete' => '0',
          ),
        ),
      ),
      '4' => array(
        'ref' => '4',
        'module' => 'kwaltz_workflow',
        'state' => 'Is Moderated',
        'weight' => '2',
        'sysid' => '0',
        'status' => '1',
        'access' => array(
          '0' => array(
            'role' => 'Writer',
            'grant_view' => '0',
            'grant_update' => '0',
            'grant_delete' => '0',
          ),
          '1' => array(
            'role' => 'Publisher',
            'grant_view' => '0',
            'grant_update' => '1',
            'grant_delete' => '0',
          ),
          '2' => array(
            'role' => 'Moderator',
            'grant_view' => '0',
            'grant_update' => '0',
            'grant_delete' => '0',
          ),
          '3' => array(
            'role' => 'authenticated user',
            'rid' => '2',
            'grant_view' => '1',
            'grant_update' => '0',
            'grant_delete' => '0',
          ),
          '4' => array(
            'role' => 'anonymous user',
            'rid' => '1',
            'grant_view' => '1',
            'grant_update' => '0',
            'grant_delete' => '0',
          ),
          '5' => array(
            'role' => 'author',
            'rid' => '-1',
            'grant_view' => '0',
            'grant_update' => '0',
            'grant_delete' => '0',
          ),
        ),
      ),
      '5' => array(
        'ref' => '5',
        'module' => 'kwaltz_workflow',
        'state' => 'Live',
        'weight' => '10',
        'sysid' => '0',
        'status' => '1',
        'access' => array(
          '0' => array(
            'role' => 'Writer',
            'grant_view' => '0',
            'grant_update' => '0',
            'grant_delete' => '0',
          ),
          '1' => array(
            'role' => 'Publisher',
            'grant_view' => '0',
            'grant_update' => '0',
            'grant_delete' => '0',
          ),
          '2' => array(
            'role' => 'Moderator',
            'grant_view' => '0',
            'grant_update' => '0',
            'grant_delete' => '0',
          ),
          '3' => array(
            'role' => 'authenticated user',
            'rid' => '2',
            'grant_view' => '1',
            'grant_update' => '0',
            'grant_delete' => '0',
          ),
          '4' => array(
            'role' => 'anonymous user',
            'rid' => '1',
            'grant_view' => '1',
            'grant_update' => '0',
            'grant_delete' => '0',
          ),
          '5' => array(
            'role' => 'author',
            'rid' => '-1',
            'grant_view' => '0',
            'grant_update' => '0',
            'grant_delete' => '0',
          ),
        ),
      ),
    ),
    'roles' => array(
      'author' => array(
        'name' => 'author',
        'transitions' => array(
          '0' => array(
            'from' => '1',
            'to' => '2',
          ),
          '1' => array(
            'from' => '5',
            'to' => '2',
          ),
        ),
      ),
      'Moderator' => array(
        'name' => 'Moderator',
        'transitions' => array(
          '0' => array(
            'from' => '3',
            'to' => '2',
          ),
          '1' => array(
            'from' => '3',
            'to' => '4',
          ),
        ),
      ),
      'Publisher' => array(
        'name' => 'Publisher',
        'transitions' => array(
          '0' => array(
            'from' => '4',
            'to' => '2',
          ),
          '1' => array(
            'from' => '4',
            'to' => '3',
          ),
          '2' => array(
            'from' => '4',
            'to' => '5',
          ),
        ),
      ),
      'Writer' => array(
        'name' => 'Writer',
        'transitions' => array(
          '0' => array(
            'from' => '2',
            'to' => '3',
          ),
        ),
      ),
    ),
    'types' => array(
      'story' => 'story',
    ),
  );
  return $defaults;

}
