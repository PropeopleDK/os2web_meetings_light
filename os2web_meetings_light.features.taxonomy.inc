<?php
/**
 * @file
 * os2web_meetings_light.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function os2web_meetings_light_taxonomy_default_vocabularies() {
  return array(
    'os2web_meetings_tax_committee' => array(
      'name' => 'Committee',
      'machine_name' => 'os2web_meetings_tax_committee',
      'description' => 'The committee having the meeting.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'os2web_meetings_tax_location' => array(
      'name' => 'Location',
      'machine_name' => 'os2web_meetings_tax_location',
      'description' => 'The location where the meeting took place.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'os2web_meetings_tax_status' => array(
      'name' => 'Meeting status',
      'machine_name' => 'os2web_meetings_tax_status',
      'description' => 'Represents the current status of the meeting.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}