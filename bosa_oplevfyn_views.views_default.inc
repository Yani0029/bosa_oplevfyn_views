<?php
/**
 * @file
 * bosa_oplevfyn_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bosa_oplevfyn_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'Produktvisning_paa_kategoriside';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Produktvisning på Kategorivisning';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'as3grid';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'product';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Indhold: Underoverskrift */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subtitle']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['element_default_classes'] = FALSE;
  /* Felt: Felt: Titel */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['text'] = '<span class="product-title">[title_field]</span>
<span class="product-subtitle">[field_subtitle]</span>';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'text_plain';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Felt: Indhold: Fotos */
  $handler->display->display_options['fields']['field_offer_images']['id'] = 'field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['table'] = 'field_data_field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['field'] = 'field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['label'] = '';
  $handler->display->display_options['fields']['field_offer_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_offer_images']['settings'] = array(
    'image_style' => 'offer_list',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_offer_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_offer_images']['delta_offset'] = '0';
  /* Sorteringskriterie: STDDEV_POP(Indhold: Oprettelsesdato) */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['group_type'] = 'stddev_pop';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: Har taksonomiterm ID (med dybde) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['value'] = '111';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '3';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'offer' => 'offer',
  );

  /* Display: Produkter - Kategorivisning */
  $handler = $view->new_display('panel_pane', 'Produkter - Kategorivisning', 'panel_pane_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'as3grid product-list';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Find';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Indhold: Refereret produkt */
  $handler->display->display_options['relationships']['field_reference_product_id']['id'] = 'field_reference_product_id';
  $handler->display->display_options['relationships']['field_reference_product_id']['table'] = 'field_data_field_reference';
  $handler->display->display_options['relationships']['field_reference_product_id']['field'] = 'field_reference_product_id';
  /* Forbindelse: Indhold: Taksonomitermer på node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'offer_type' => 'offer_type',
    'geografi' => 0,
    'sale' => 0,
    'weeks' => 0,
    'tags' => 0,
    'prices' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: MIN(Ord i ordforråd: Term ID) */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['tid']['group_type'] = 'min';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['format_plural'] = TRUE;
  /* Felt: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'knaptekst oversat';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php print (t(\'Buy now\')); ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Felt: Indhold: Knaptekst */
  $handler->display->display_options['fields']['field_knaptekst']['id'] = 'field_knaptekst';
  $handler->display->display_options['fields']['field_knaptekst']['table'] = 'field_data_field_knaptekst';
  $handler->display->display_options['fields']['field_knaptekst']['field'] = 'field_knaptekst';
  $handler->display->display_options['fields']['field_knaptekst']['label'] = '';
  $handler->display->display_options['fields']['field_knaptekst']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_knaptekst']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_knaptekst']['empty'] = '[php]';
  $handler->display->display_options['fields']['field_knaptekst']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_knaptekst']['group_column'] = 'entity_id';
  /* Felt: Felt: Titel */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['alter']['text'] = '<span class="product-title">[title_field]</span>
<span class="product-subtitle">[field_subtitle]</span>';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['element_wrapper_class'] = 'term[tid]';
  $handler->display->display_options['fields']['title_field']['type'] = 'text_plain';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['title_field']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Felt: Indhold: Underoverskrift */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_subtitle']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['field_subtitle']['group_column'] = 'entity_id';
  /* Felt: Indhold: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<span class="btn btn-small">[field_knaptekst]</span>';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Fotos */
  $handler->display->display_options['fields']['field_offer_images']['id'] = 'field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['table'] = 'field_data_field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['field'] = 'field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['label'] = '';
  $handler->display->display_options['fields']['field_offer_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_offer_images']['settings'] = array(
    'image_style' => 'offer_list',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_offer_images']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_offer_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_offer_images']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Global: Tilfældig */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'offer' => 'offer',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Indhold: Sale kategori (field_sale_kategori) (translated) */
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['id'] = 'field_sale_kategori_tid_i18n';
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['table'] = 'field_data_field_sale_kategori';
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['field'] = 'field_sale_kategori_tid_i18n';
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['expose']['operator_id'] = 'field_sale_kategori_tid_i18n_op';
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['expose']['label'] = 'Sorter efter sale';
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['expose']['operator'] = 'field_sale_kategori_tid_i18n_op';
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['expose']['identifier'] = 'field_sale_kategori_tid_i18n';
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['vocabulary'] = 'sale';
  /* Filterkriterie: Indhold: Tårne kategori (field_offer_type) (translated) */
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['id'] = 'field_offer_type_tid_i18n';
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['table'] = 'field_data_field_offer_type';
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['field'] = 'field_offer_type_tid_i18n';
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['expose']['operator_id'] = 'field_offer_type_tid_i18n_op';
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['expose']['label'] = 'Tårne kategori';
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['expose']['operator'] = 'field_offer_type_tid_i18n_op';
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['expose']['identifier'] = 'field_offer_type_tid_i18n';
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['vocabulary'] = 'offer_type';
  /* Filterkriterie: Indhold: Geografi kategori (field_geografi_kategori) (translated) */
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['id'] = 'field_geografi_kategori_tid_i18n';
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['table'] = 'field_data_field_geografi_kategori';
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['field'] = 'field_geografi_kategori_tid_i18n';
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['expose']['operator_id'] = 'field_geografi_kategori_tid_i18n_op';
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['expose']['label'] = 'Sorter efter geografi';
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['expose']['operator'] = 'field_geografi_kategori_tid_i18n_op';
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['expose']['identifier'] = 'field_geografi_kategori_tid_i18n';
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['vocabulary'] = 'geografi';
  /* Filterkriterie: Indhold: Udløbsdato (field_udl_bsdato) */
  $handler->display->display_options['filters']['field_udl_bsdato_value_2']['id'] = 'field_udl_bsdato_value_2';
  $handler->display->display_options['filters']['field_udl_bsdato_value_2']['table'] = 'field_data_field_udl_bsdato';
  $handler->display->display_options['filters']['field_udl_bsdato_value_2']['field'] = 'field_udl_bsdato_value';
  $handler->display->display_options['filters']['field_udl_bsdato_value_2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_udl_bsdato_value_2']['group'] = 1;
  $handler->display->display_options['filters']['field_udl_bsdato_value_2']['default_date'] = 'now';
  /* Filterkriterie: Indhold: Udløbsdato (field_udl_bsdato) */
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['id'] = 'field_udl_bsdato_value_1';
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['table'] = 'field_data_field_udl_bsdato';
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['field'] = 'field_udl_bsdato_value';
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['operator'] = '>=';
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['group'] = 2;
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['expose']['operator_id'] = 'field_udl_bsdato_value_1_op';
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['expose']['label'] = 'Udløbsdato (field_udl_bsdato)';
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['expose']['operator'] = 'field_udl_bsdato_value_1_op';
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['expose']['identifier'] = 'field_udl_bsdato_value';
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['group_info']['label'] = 'Udløbsdato (field_udl_bsdato)';
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['group_info']['identifier'] = 'field_udl_bsdato_value_1';
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['form_type'] = 'date_popup';
  /* Filterkriterie: Indhold: Startdato (field_startdato) */
  $handler->display->display_options['filters']['field_startdato_value']['id'] = 'field_startdato_value';
  $handler->display->display_options['filters']['field_startdato_value']['table'] = 'field_data_field_startdato';
  $handler->display->display_options['filters']['field_startdato_value']['field'] = 'field_startdato_value';
  $handler->display->display_options['filters']['field_startdato_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_startdato_value']['group'] = 2;
  $handler->display->display_options['filters']['field_startdato_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_startdato_value']['expose']['operator_id'] = 'field_startdato_value_op';
  $handler->display->display_options['filters']['field_startdato_value']['expose']['operator'] = 'field_startdato_value_op';
  $handler->display->display_options['filters']['field_startdato_value']['expose']['identifier'] = 'field_startdato_value';
  $handler->display->display_options['filters']['field_startdato_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_startdato_value']['form_type'] = 'date_popup';
  $handler->display->display_options['argument_input'] = array(
    'term_node_tid_depth' => array(
      'type' => 'user',
      'context' => 'entity:user.cancel-url',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Har taksonomiterm ID (med dybde)',
    ),
  );

  /* Display: Produkter - blok på forside */
  $handler = $view->new_display('block', 'Produkter - blok på forside', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'product product-front';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Indhold: Taksonomitermer på node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'offer_type' => 'offer_type',
    'geografi' => 0,
    'prices' => 0,
    'sale' => 0,
    'tags' => 0,
    'weeks' => 0,
  );
  /* Forbindelse: Ord i ordforråd: Indhold med term */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['relationship'] = 'term_node_tid';
  /* Forbindelse: Ord i ordforråd: Overordnet term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'term_node_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: MIN(Ord i ordforråd: Term ID) */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['tid']['group_type'] = 'min';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Felt: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'knaptekst oversat';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php print(t(\'Buy now\')); ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Felt: Indhold: Knaptekst */
  $handler->display->display_options['fields']['field_knaptekst']['id'] = 'field_knaptekst';
  $handler->display->display_options['fields']['field_knaptekst']['table'] = 'field_data_field_knaptekst';
  $handler->display->display_options['fields']['field_knaptekst']['field'] = 'field_knaptekst';
  $handler->display->display_options['fields']['field_knaptekst']['label'] = '';
  $handler->display->display_options['fields']['field_knaptekst']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_knaptekst']['alter']['path'] = '[link_to_revision]';
  $handler->display->display_options['fields']['field_knaptekst']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_knaptekst']['empty'] = '[php]';
  $handler->display->display_options['fields']['field_knaptekst']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_knaptekst']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['field_knaptekst']['group_column'] = 'entity_id';
  /* Felt: Felt: Titel */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['alter']['text'] = '<span class="product-title">[title_field]</span>
';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['element_wrapper_class'] = 'term[tid]';
  $handler->display->display_options['fields']['title_field']['type'] = 'text_plain';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['title_field']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Felt: Indhold: Underoverskrift */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_subtitle']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Felt: Indhold: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<span class="btn btn-small">[field_knaptekst]</span>';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Fotos */
  $handler->display->display_options['fields']['field_offer_images']['id'] = 'field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['table'] = 'field_data_field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['field'] = 'field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['label'] = '';
  $handler->display->display_options['fields']['field_offer_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_offer_images']['settings'] = array(
    'image_style' => 'offer_list',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_offer_images']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_offer_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_offer_images']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Klæbrig */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  /* Sorteringskriterie: Global: Tilfældig */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'offer' => 'offer',
  );
  /* Filterkriterie: Indhold: Udløbsdato (field_udl_bsdato) */
  $handler->display->display_options['filters']['field_udl_bsdato_value']['id'] = 'field_udl_bsdato_value';
  $handler->display->display_options['filters']['field_udl_bsdato_value']['table'] = 'field_data_field_udl_bsdato';
  $handler->display->display_options['filters']['field_udl_bsdato_value']['field'] = 'field_udl_bsdato_value';
  $handler->display->display_options['filters']['field_udl_bsdato_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_udl_bsdato_value']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_udl_bsdato_value']['default_date'] = 'now';

  /* Display: Produkter - iframe */
  $handler = $view->new_display('panel_pane', 'Produkter - iframe', 'panel_pane_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'as3grid product-list';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Find';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Indhold: Refereret produkt */
  $handler->display->display_options['relationships']['field_reference_product_id']['id'] = 'field_reference_product_id';
  $handler->display->display_options['relationships']['field_reference_product_id']['table'] = 'field_data_field_reference';
  $handler->display->display_options['relationships']['field_reference_product_id']['field'] = 'field_reference_product_id';
  /* Forbindelse: Indhold: Taksonomitermer på node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'offer_type' => 'offer_type',
    'geografi' => 0,
    'sale' => 0,
    'weeks' => 0,
    'tags' => 0,
    'prices' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: MIN(Ord i ordforråd: Term ID) */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['tid']['group_type'] = 'min';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['format_plural'] = TRUE;
  /* Felt: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'knaptekst oversat';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php print (t(\'Buy now\')); ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Felt: Indhold: Knaptekst */
  $handler->display->display_options['fields']['field_knaptekst']['id'] = 'field_knaptekst';
  $handler->display->display_options['fields']['field_knaptekst']['table'] = 'field_data_field_knaptekst';
  $handler->display->display_options['fields']['field_knaptekst']['field'] = 'field_knaptekst';
  $handler->display->display_options['fields']['field_knaptekst']['label'] = '';
  $handler->display->display_options['fields']['field_knaptekst']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_knaptekst']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_knaptekst']['alter']['text'] = '[php]';
  $handler->display->display_options['fields']['field_knaptekst']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_knaptekst']['empty'] = 'Book nu';
  $handler->display->display_options['fields']['field_knaptekst']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_knaptekst']['group_column'] = 'entity_id';
  /* Felt: Felt: Titel */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['alter']['text'] = '<span class="product-title">[title_field]</span>
<span class="product-subtitle">[field_subtitle]</span>';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['element_wrapper_class'] = 'term[tid]';
  $handler->display->display_options['fields']['title_field']['type'] = 'text_plain';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['title_field']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Felt: Indhold: Underoverskrift */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_subtitle']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['field_subtitle']['group_column'] = 'entity_id';
  /* Felt: Indhold: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<span class="btn btn-small">[field_knaptekst]</span>';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Fotos */
  $handler->display->display_options['fields']['field_offer_images']['id'] = 'field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['table'] = 'field_data_field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['field'] = 'field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['label'] = '';
  $handler->display->display_options['fields']['field_offer_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_offer_images']['settings'] = array(
    'image_style' => 'offer_list',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_offer_images']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_offer_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_offer_images']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Global: Tilfældig */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
  /* Kontekstuelt filter: Indhold: Har taksonomiterm ID (med dybde) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '3';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'offer' => 'offer',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Indhold: Sale kategori (field_sale_kategori) (translated) */
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['id'] = 'field_sale_kategori_tid_i18n';
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['table'] = 'field_data_field_sale_kategori';
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['field'] = 'field_sale_kategori_tid_i18n';
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['expose']['operator_id'] = 'field_sale_kategori_tid_i18n_op';
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['expose']['label'] = 'Sorter efter sale';
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['expose']['operator'] = 'field_sale_kategori_tid_i18n_op';
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['expose']['identifier'] = 'field_sale_kategori_tid_i18n';
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['vocabulary'] = 'sale';
  /* Filterkriterie: Indhold: Tårne kategori (field_offer_type) (translated) */
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['id'] = 'field_offer_type_tid_i18n';
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['table'] = 'field_data_field_offer_type';
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['field'] = 'field_offer_type_tid_i18n';
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['expose']['operator_id'] = 'field_offer_type_tid_i18n_op';
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['expose']['label'] = 'Tårne kategori';
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['expose']['operator'] = 'field_offer_type_tid_i18n_op';
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['expose']['identifier'] = 'field_offer_type_tid_i18n';
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['vocabulary'] = 'offer_type';
  /* Filterkriterie: Indhold: Geografi kategori (field_geografi_kategori) (translated) */
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['id'] = 'field_geografi_kategori_tid_i18n';
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['table'] = 'field_data_field_geografi_kategori';
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['field'] = 'field_geografi_kategori_tid_i18n';
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['expose']['operator_id'] = 'field_geografi_kategori_tid_i18n_op';
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['expose']['label'] = 'Sorter efter geografi';
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['expose']['operator'] = 'field_geografi_kategori_tid_i18n_op';
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['expose']['identifier'] = 'field_geografi_kategori_tid_i18n';
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['vocabulary'] = 'geografi';
  /* Filterkriterie: Commerce Product: Dato (field_offer_dato) */
  $handler->display->display_options['filters']['field_offer_dato_value']['id'] = 'field_offer_dato_value';
  $handler->display->display_options['filters']['field_offer_dato_value']['table'] = 'field_data_field_offer_dato';
  $handler->display->display_options['filters']['field_offer_dato_value']['field'] = 'field_offer_dato_value';
  $handler->display->display_options['filters']['field_offer_dato_value']['relationship'] = 'field_reference_product_id';
  $handler->display->display_options['filters']['field_offer_dato_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_offer_dato_value']['group'] = 2;
  $handler->display->display_options['filters']['field_offer_dato_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_offer_dato_value']['expose']['operator_id'] = 'field_offer_dato_value_op';
  $handler->display->display_options['filters']['field_offer_dato_value']['expose']['label'] = 'Fra:';
  $handler->display->display_options['filters']['field_offer_dato_value']['expose']['operator'] = 'field_offer_dato_value_op';
  $handler->display->display_options['filters']['field_offer_dato_value']['expose']['identifier'] = 'field_offer_dato_value';
  $handler->display->display_options['filters']['field_offer_dato_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_offer_dato_value']['form_type'] = 'date_popup';
  /* Filterkriterie: Commerce Product: Dato (field_offer_dato) */
  $handler->display->display_options['filters']['field_offer_dato_value_1']['id'] = 'field_offer_dato_value_1';
  $handler->display->display_options['filters']['field_offer_dato_value_1']['table'] = 'field_data_field_offer_dato';
  $handler->display->display_options['filters']['field_offer_dato_value_1']['field'] = 'field_offer_dato_value';
  $handler->display->display_options['filters']['field_offer_dato_value_1']['relationship'] = 'field_reference_product_id';
  $handler->display->display_options['filters']['field_offer_dato_value_1']['operator'] = '<=';
  $handler->display->display_options['filters']['field_offer_dato_value_1']['group'] = 2;
  $handler->display->display_options['filters']['field_offer_dato_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_offer_dato_value_1']['expose']['operator_id'] = 'field_offer_dato_value_1_op';
  $handler->display->display_options['filters']['field_offer_dato_value_1']['expose']['label'] = 'Til:';
  $handler->display->display_options['filters']['field_offer_dato_value_1']['expose']['operator'] = 'field_offer_dato_value_1_op';
  $handler->display->display_options['filters']['field_offer_dato_value_1']['expose']['identifier'] = 'field_offer_dato_value_1';
  $handler->display->display_options['filters']['field_offer_dato_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_offer_dato_value_1']['form_type'] = 'date_popup';
  /* Filterkriterie: Commerce Product: Dato og tidspunkt for sidste ordre (field_dato_og_tidspunkt_for_sids) */
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['id'] = 'field_dato_og_tidspunkt_for_sids_value';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['table'] = 'field_data_field_dato_og_tidspunkt_for_sids';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['field'] = 'field_dato_og_tidspunkt_for_sids_value';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['relationship'] = 'field_reference_product_id';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['default_date'] = 'now';
  $handler->display->display_options['argument_input'] = array(
    'term_node_tid_depth' => array(
      'type' => 'user',
      'context' => 'entity:user.cancel-url',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Har taksonomiterm ID (med dybde)',
    ),
  );

  /* Display: iframe - Kategorivisning */
  $handler = $view->new_display('panel_pane', 'iframe - Kategorivisning', 'panel_pane_4');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'as3grid product-list';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Find';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Der er ingen produkter';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Der er ingen produkter';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Indhold: Refereret produkt */
  $handler->display->display_options['relationships']['field_reference_product_id']['id'] = 'field_reference_product_id';
  $handler->display->display_options['relationships']['field_reference_product_id']['table'] = 'field_data_field_reference';
  $handler->display->display_options['relationships']['field_reference_product_id']['field'] = 'field_reference_product_id';
  /* Forbindelse: Indhold: Taksonomitermer på node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'offer_type' => 'offer_type',
    'geografi' => 0,
    'sale' => 0,
    'weeks' => 0,
    'tags' => 0,
    'prices' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: MIN(Ord i ordforråd: Term ID) */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['tid']['group_type'] = 'min';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['format_plural'] = TRUE;
  /* Felt: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'knaptekst oversat';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php print (t(\'Buy now\')); ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Felt: Indhold: Knaptekst */
  $handler->display->display_options['fields']['field_knaptekst']['id'] = 'field_knaptekst';
  $handler->display->display_options['fields']['field_knaptekst']['table'] = 'field_data_field_knaptekst';
  $handler->display->display_options['fields']['field_knaptekst']['field'] = 'field_knaptekst';
  $handler->display->display_options['fields']['field_knaptekst']['label'] = '';
  $handler->display->display_options['fields']['field_knaptekst']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_knaptekst']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_knaptekst']['empty'] = '[php]';
  $handler->display->display_options['fields']['field_knaptekst']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_knaptekst']['group_column'] = 'entity_id';
  /* Felt: Felt: Titel */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['alter']['text'] = '<span class="product-title">[title_field]</span>
<span class="product-subtitle">[field_subtitle]</span>';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['element_wrapper_class'] = 'term[tid]';
  $handler->display->display_options['fields']['title_field']['type'] = 'text_plain';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['title_field']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Felt: Indhold: Underoverskrift */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_subtitle']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['field_subtitle']['group_column'] = 'entity_id';
  /* Felt: Indhold: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<span class="btn btn-small">[field_knaptekst]</span>';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Fotos */
  $handler->display->display_options['fields']['field_offer_images']['id'] = 'field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['table'] = 'field_data_field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['field'] = 'field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['label'] = '';
  $handler->display->display_options['fields']['field_offer_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_offer_images']['settings'] = array(
    'image_style' => 'offer_list',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_offer_images']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_offer_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_offer_images']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Global: Tilfældig */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Har taksonomiterm ID (med dybde) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '3';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
  /* Kontekstuelt filter: Indhold: Tårne kategori (field_offer_type) */
  $handler->display->display_options['arguments']['field_offer_type_tid']['id'] = 'field_offer_type_tid';
  $handler->display->display_options['arguments']['field_offer_type_tid']['table'] = 'field_data_field_offer_type';
  $handler->display->display_options['arguments']['field_offer_type_tid']['field'] = 'field_offer_type_tid';
  $handler->display->display_options['arguments']['field_offer_type_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_offer_type_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_offer_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_offer_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_offer_type_tid']['summary_options']['items_per_page'] = '25';
  /* Kontekstuelt filter: Indhold: Sale kategori (field_sale_kategori) */
  $handler->display->display_options['arguments']['field_sale_kategori_tid']['id'] = 'field_sale_kategori_tid';
  $handler->display->display_options['arguments']['field_sale_kategori_tid']['table'] = 'field_data_field_sale_kategori';
  $handler->display->display_options['arguments']['field_sale_kategori_tid']['field'] = 'field_sale_kategori_tid';
  $handler->display->display_options['arguments']['field_sale_kategori_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_sale_kategori_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_sale_kategori_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_sale_kategori_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_sale_kategori_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'offer' => 'offer',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Indhold: Sale kategori (field_sale_kategori) (translated) */
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['id'] = 'field_sale_kategori_tid_i18n';
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['table'] = 'field_data_field_sale_kategori';
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['field'] = 'field_sale_kategori_tid_i18n';
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['expose']['operator_id'] = 'field_sale_kategori_tid_i18n_op';
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['expose']['label'] = 'Sorter efter sale';
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['expose']['operator'] = 'field_sale_kategori_tid_i18n_op';
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['expose']['identifier'] = 'field_sale_kategori_tid_i18n';
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['vocabulary'] = 'sale';
  /* Filterkriterie: Indhold: Tårne kategori (field_offer_type) (translated) */
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['id'] = 'field_offer_type_tid_i18n';
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['table'] = 'field_data_field_offer_type';
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['field'] = 'field_offer_type_tid_i18n';
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['expose']['operator_id'] = 'field_offer_type_tid_i18n_op';
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['expose']['label'] = 'Tårne kategori';
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['expose']['operator'] = 'field_offer_type_tid_i18n_op';
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['expose']['identifier'] = 'field_offer_type_tid_i18n';
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['vocabulary'] = 'offer_type';
  /* Filterkriterie: Indhold: Geografi kategori (field_geografi_kategori) (translated) */
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['id'] = 'field_geografi_kategori_tid_i18n';
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['table'] = 'field_data_field_geografi_kategori';
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['field'] = 'field_geografi_kategori_tid_i18n';
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['expose']['operator_id'] = 'field_geografi_kategori_tid_i18n_op';
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['expose']['label'] = 'Sorter efter geografi';
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['expose']['operator'] = 'field_geografi_kategori_tid_i18n_op';
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['expose']['identifier'] = 'field_geografi_kategori_tid_i18n';
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['vocabulary'] = 'geografi';
  /* Filterkriterie: Indhold: Udløbsdato (field_udl_bsdato) */
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['id'] = 'field_udl_bsdato_value_1';
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['table'] = 'field_data_field_udl_bsdato';
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['field'] = 'field_udl_bsdato_value';
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['operator'] = '>=';
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['group'] = 2;
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['expose']['operator_id'] = 'field_udl_bsdato_value_1_op';
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['expose']['label'] = 'Udløbsdato (field_udl_bsdato)';
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['expose']['operator'] = 'field_udl_bsdato_value_1_op';
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['expose']['identifier'] = 'field_offer_dato_value';
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['form_type'] = 'date_popup';
  /* Filterkriterie: Indhold: Udløbsdato (field_udl_bsdato) */
  $handler->display->display_options['filters']['field_udl_bsdato_value']['id'] = 'field_udl_bsdato_value';
  $handler->display->display_options['filters']['field_udl_bsdato_value']['table'] = 'field_data_field_udl_bsdato';
  $handler->display->display_options['filters']['field_udl_bsdato_value']['field'] = 'field_udl_bsdato_value';
  $handler->display->display_options['filters']['field_udl_bsdato_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_udl_bsdato_value']['group'] = 2;
  $handler->display->display_options['filters']['field_udl_bsdato_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_udl_bsdato_value']['expose']['operator_id'] = 'field_udl_bsdato_value_op';
  $handler->display->display_options['filters']['field_udl_bsdato_value']['expose']['label'] = 'Udløbsdato (field_udl_bsdato)';
  $handler->display->display_options['filters']['field_udl_bsdato_value']['expose']['operator'] = 'field_udl_bsdato_value_op';
  $handler->display->display_options['filters']['field_udl_bsdato_value']['expose']['identifier'] = 'field_offer_dato_value_1';
  $handler->display->display_options['filters']['field_udl_bsdato_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_udl_bsdato_value']['form_type'] = 'date_popup';
  /* Filterkriterie: Indhold: Udløbsdato (field_udl_bsdato) */
  $handler->display->display_options['filters']['field_udl_bsdato_value_2']['id'] = 'field_udl_bsdato_value_2';
  $handler->display->display_options['filters']['field_udl_bsdato_value_2']['table'] = 'field_data_field_udl_bsdato';
  $handler->display->display_options['filters']['field_udl_bsdato_value_2']['field'] = 'field_udl_bsdato_value';
  $handler->display->display_options['filters']['field_udl_bsdato_value_2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_udl_bsdato_value_2']['default_date'] = 'now';
  $handler->display->display_options['argument_input'] = array(
    'term_node_tid_depth' => array(
      'type' => 'user',
      'context' => 'entity:user.cancel-url',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Har taksonomiterm ID (med dybde)',
    ),
  );

  /* Display: iframe - K - Senest */
  $handler = $view->new_display('panel_pane', 'iframe - K - Senest', 'panel_pane_5');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'as3grid product-list';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Find';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Der er ingen produkter';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Der er ingen produkter';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Indhold: Refereret produkt */
  $handler->display->display_options['relationships']['field_reference_product_id']['id'] = 'field_reference_product_id';
  $handler->display->display_options['relationships']['field_reference_product_id']['table'] = 'field_data_field_reference';
  $handler->display->display_options['relationships']['field_reference_product_id']['field'] = 'field_reference_product_id';
  /* Forbindelse: Indhold: Taksonomitermer på node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'offer_type' => 'offer_type',
    'geografi' => 0,
    'sale' => 0,
    'weeks' => 0,
    'tags' => 0,
    'prices' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: MIN(Ord i ordforråd: Term ID) */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['tid']['group_type'] = 'min';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['format_plural'] = TRUE;
  /* Felt: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'knaptekst oversat';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php print (t(\'Buy now\')); ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Felt: Indhold: Knaptekst */
  $handler->display->display_options['fields']['field_knaptekst']['id'] = 'field_knaptekst';
  $handler->display->display_options['fields']['field_knaptekst']['table'] = 'field_data_field_knaptekst';
  $handler->display->display_options['fields']['field_knaptekst']['field'] = 'field_knaptekst';
  $handler->display->display_options['fields']['field_knaptekst']['label'] = '';
  $handler->display->display_options['fields']['field_knaptekst']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_knaptekst']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_knaptekst']['empty'] = '[php]';
  $handler->display->display_options['fields']['field_knaptekst']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_knaptekst']['group_column'] = 'entity_id';
  /* Felt: Felt: Titel */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['alter']['text'] = '<span class="product-title">[title_field]</span>
<span class="product-subtitle">[field_subtitle]</span>';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['element_wrapper_class'] = 'term[tid]';
  $handler->display->display_options['fields']['title_field']['type'] = 'text_plain';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['title_field']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Felt: Indhold: Underoverskrift */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_subtitle']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['field_subtitle']['group_column'] = 'entity_id';
  /* Felt: Indhold: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<span class="btn btn-small">[field_knaptekst]</span>';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Fotos */
  $handler->display->display_options['fields']['field_offer_images']['id'] = 'field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['table'] = 'field_data_field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['field'] = 'field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['label'] = '';
  $handler->display->display_options['fields']['field_offer_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_offer_images']['settings'] = array(
    'image_style' => 'offer_list',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_offer_images']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_offer_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_offer_images']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Har taksonomiterm ID (med dybde) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '3';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
  /* Kontekstuelt filter: Indhold: Tårne kategori (field_offer_type) */
  $handler->display->display_options['arguments']['field_offer_type_tid']['id'] = 'field_offer_type_tid';
  $handler->display->display_options['arguments']['field_offer_type_tid']['table'] = 'field_data_field_offer_type';
  $handler->display->display_options['arguments']['field_offer_type_tid']['field'] = 'field_offer_type_tid';
  $handler->display->display_options['arguments']['field_offer_type_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_offer_type_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_offer_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_offer_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_offer_type_tid']['summary_options']['items_per_page'] = '25';
  /* Kontekstuelt filter: Indhold: Sale kategori (field_sale_kategori) */
  $handler->display->display_options['arguments']['field_sale_kategori_tid']['id'] = 'field_sale_kategori_tid';
  $handler->display->display_options['arguments']['field_sale_kategori_tid']['table'] = 'field_data_field_sale_kategori';
  $handler->display->display_options['arguments']['field_sale_kategori_tid']['field'] = 'field_sale_kategori_tid';
  $handler->display->display_options['arguments']['field_sale_kategori_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_sale_kategori_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_sale_kategori_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_sale_kategori_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_sale_kategori_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'offer' => 'offer',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Indhold: Sale kategori (field_sale_kategori) (translated) */
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['id'] = 'field_sale_kategori_tid_i18n';
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['table'] = 'field_data_field_sale_kategori';
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['field'] = 'field_sale_kategori_tid_i18n';
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['expose']['operator_id'] = 'field_sale_kategori_tid_i18n_op';
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['expose']['label'] = 'Sorter efter sale';
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['expose']['operator'] = 'field_sale_kategori_tid_i18n_op';
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['expose']['identifier'] = 'field_sale_kategori_tid_i18n';
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['vocabulary'] = 'sale';
  /* Filterkriterie: Indhold: Tårne kategori (field_offer_type) (translated) */
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['id'] = 'field_offer_type_tid_i18n';
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['table'] = 'field_data_field_offer_type';
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['field'] = 'field_offer_type_tid_i18n';
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['expose']['operator_id'] = 'field_offer_type_tid_i18n_op';
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['expose']['label'] = 'Tårne kategori';
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['expose']['operator'] = 'field_offer_type_tid_i18n_op';
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['expose']['identifier'] = 'field_offer_type_tid_i18n';
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['vocabulary'] = 'offer_type';
  /* Filterkriterie: Indhold: Geografi kategori (field_geografi_kategori) (translated) */
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['id'] = 'field_geografi_kategori_tid_i18n';
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['table'] = 'field_data_field_geografi_kategori';
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['field'] = 'field_geografi_kategori_tid_i18n';
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['expose']['operator_id'] = 'field_geografi_kategori_tid_i18n_op';
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['expose']['label'] = 'Sorter efter geografi';
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['expose']['operator'] = 'field_geografi_kategori_tid_i18n_op';
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['expose']['identifier'] = 'field_geografi_kategori_tid_i18n';
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['vocabulary'] = 'geografi';
  /* Filterkriterie: Indhold: Udløbsdato (field_udl_bsdato) */
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['id'] = 'field_udl_bsdato_value_1';
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['table'] = 'field_data_field_udl_bsdato';
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['field'] = 'field_udl_bsdato_value';
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['operator'] = '>=';
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['group'] = 2;
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['expose']['operator_id'] = 'field_udl_bsdato_value_1_op';
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['expose']['label'] = 'Udløbsdato (field_udl_bsdato)';
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['expose']['operator'] = 'field_udl_bsdato_value_1_op';
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['expose']['identifier'] = 'field_offer_dato_value';
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['form_type'] = 'date_popup';
  /* Filterkriterie: Indhold: Udløbsdato (field_udl_bsdato) */
  $handler->display->display_options['filters']['field_udl_bsdato_value']['id'] = 'field_udl_bsdato_value';
  $handler->display->display_options['filters']['field_udl_bsdato_value']['table'] = 'field_data_field_udl_bsdato';
  $handler->display->display_options['filters']['field_udl_bsdato_value']['field'] = 'field_udl_bsdato_value';
  $handler->display->display_options['filters']['field_udl_bsdato_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_udl_bsdato_value']['group'] = 2;
  $handler->display->display_options['filters']['field_udl_bsdato_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_udl_bsdato_value']['expose']['operator_id'] = 'field_udl_bsdato_value_op';
  $handler->display->display_options['filters']['field_udl_bsdato_value']['expose']['label'] = 'Udløbsdato (field_udl_bsdato)';
  $handler->display->display_options['filters']['field_udl_bsdato_value']['expose']['operator'] = 'field_udl_bsdato_value_op';
  $handler->display->display_options['filters']['field_udl_bsdato_value']['expose']['identifier'] = 'field_offer_dato_value_1';
  $handler->display->display_options['filters']['field_udl_bsdato_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_udl_bsdato_value']['form_type'] = 'date_popup';
  /* Filterkriterie: Indhold: Udløbsdato (field_udl_bsdato) */
  $handler->display->display_options['filters']['field_udl_bsdato_value_2']['id'] = 'field_udl_bsdato_value_2';
  $handler->display->display_options['filters']['field_udl_bsdato_value_2']['table'] = 'field_data_field_udl_bsdato';
  $handler->display->display_options['filters']['field_udl_bsdato_value_2']['field'] = 'field_udl_bsdato_value';
  $handler->display->display_options['filters']['field_udl_bsdato_value_2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_udl_bsdato_value_2']['default_date'] = 'now';
  $handler->display->display_options['argument_input'] = array(
    'term_node_tid_depth' => array(
      'type' => 'user',
      'context' => 'entity:user.cancel-url',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Har taksonomiterm ID (med dybde)',
    ),
  );

  /* Display: Produkter - iframe - senest */
  $handler = $view->new_display('panel_pane', 'Produkter - iframe - senest', 'panel_pane_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'as3grid product-list';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Find';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Indhold: Refereret produkt */
  $handler->display->display_options['relationships']['field_reference_product_id']['id'] = 'field_reference_product_id';
  $handler->display->display_options['relationships']['field_reference_product_id']['table'] = 'field_data_field_reference';
  $handler->display->display_options['relationships']['field_reference_product_id']['field'] = 'field_reference_product_id';
  /* Forbindelse: Indhold: Taksonomitermer på node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'offer_type' => 'offer_type',
    'geografi' => 0,
    'sale' => 0,
    'weeks' => 0,
    'tags' => 0,
    'prices' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: MIN(Ord i ordforråd: Term ID) */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['tid']['group_type'] = 'min';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['format_plural'] = TRUE;
  /* Felt: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'knaptekst oversat';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php print (t(\'Buy now\')); ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Felt: Indhold: Knaptekst */
  $handler->display->display_options['fields']['field_knaptekst']['id'] = 'field_knaptekst';
  $handler->display->display_options['fields']['field_knaptekst']['table'] = 'field_data_field_knaptekst';
  $handler->display->display_options['fields']['field_knaptekst']['field'] = 'field_knaptekst';
  $handler->display->display_options['fields']['field_knaptekst']['label'] = '';
  $handler->display->display_options['fields']['field_knaptekst']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_knaptekst']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_knaptekst']['alter']['text'] = '[php]';
  $handler->display->display_options['fields']['field_knaptekst']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_knaptekst']['empty'] = 'Book nu';
  $handler->display->display_options['fields']['field_knaptekst']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_knaptekst']['group_column'] = 'entity_id';
  /* Felt: Felt: Titel */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['alter']['text'] = '<span class="product-title">[title_field]</span>
<span class="product-subtitle">[field_subtitle]</span>';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['element_wrapper_class'] = 'term[tid]';
  $handler->display->display_options['fields']['title_field']['type'] = 'text_plain';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['title_field']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Felt: Indhold: Underoverskrift */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_subtitle']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['field_subtitle']['group_column'] = 'entity_id';
  /* Felt: Indhold: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<span class="btn btn-small">[field_knaptekst]</span>';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Fotos */
  $handler->display->display_options['fields']['field_offer_images']['id'] = 'field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['table'] = 'field_data_field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['field'] = 'field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['label'] = '';
  $handler->display->display_options['fields']['field_offer_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_offer_images']['settings'] = array(
    'image_style' => 'offer_list',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_offer_images']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_offer_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_offer_images']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
  /* Kontekstuelt filter: Indhold: Har taksonomiterm ID (med dybde) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '3';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'offer' => 'offer',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Indhold: Sale kategori (field_sale_kategori) (translated) */
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['id'] = 'field_sale_kategori_tid_i18n';
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['table'] = 'field_data_field_sale_kategori';
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['field'] = 'field_sale_kategori_tid_i18n';
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['expose']['operator_id'] = 'field_sale_kategori_tid_i18n_op';
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['expose']['label'] = 'Sorter efter sale';
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['expose']['operator'] = 'field_sale_kategori_tid_i18n_op';
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['expose']['identifier'] = 'field_sale_kategori_tid_i18n';
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_sale_kategori_tid_i18n']['vocabulary'] = 'sale';
  /* Filterkriterie: Indhold: Tårne kategori (field_offer_type) (translated) */
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['id'] = 'field_offer_type_tid_i18n';
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['table'] = 'field_data_field_offer_type';
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['field'] = 'field_offer_type_tid_i18n';
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['expose']['operator_id'] = 'field_offer_type_tid_i18n_op';
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['expose']['label'] = 'Tårne kategori';
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['expose']['operator'] = 'field_offer_type_tid_i18n_op';
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['expose']['identifier'] = 'field_offer_type_tid_i18n';
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_offer_type_tid_i18n']['vocabulary'] = 'offer_type';
  /* Filterkriterie: Indhold: Geografi kategori (field_geografi_kategori) (translated) */
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['id'] = 'field_geografi_kategori_tid_i18n';
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['table'] = 'field_data_field_geografi_kategori';
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['field'] = 'field_geografi_kategori_tid_i18n';
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['expose']['operator_id'] = 'field_geografi_kategori_tid_i18n_op';
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['expose']['label'] = 'Sorter efter geografi';
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['expose']['operator'] = 'field_geografi_kategori_tid_i18n_op';
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['expose']['identifier'] = 'field_geografi_kategori_tid_i18n';
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_geografi_kategori_tid_i18n']['vocabulary'] = 'geografi';
  /* Filterkriterie: Commerce Product: Dato (field_offer_dato) */
  $handler->display->display_options['filters']['field_offer_dato_value']['id'] = 'field_offer_dato_value';
  $handler->display->display_options['filters']['field_offer_dato_value']['table'] = 'field_data_field_offer_dato';
  $handler->display->display_options['filters']['field_offer_dato_value']['field'] = 'field_offer_dato_value';
  $handler->display->display_options['filters']['field_offer_dato_value']['relationship'] = 'field_reference_product_id';
  $handler->display->display_options['filters']['field_offer_dato_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_offer_dato_value']['group'] = 2;
  $handler->display->display_options['filters']['field_offer_dato_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_offer_dato_value']['expose']['operator_id'] = 'field_offer_dato_value_op';
  $handler->display->display_options['filters']['field_offer_dato_value']['expose']['label'] = 'Fra:';
  $handler->display->display_options['filters']['field_offer_dato_value']['expose']['operator'] = 'field_offer_dato_value_op';
  $handler->display->display_options['filters']['field_offer_dato_value']['expose']['identifier'] = 'field_offer_dato_value';
  $handler->display->display_options['filters']['field_offer_dato_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_offer_dato_value']['form_type'] = 'date_popup';
  /* Filterkriterie: Commerce Product: Dato (field_offer_dato) */
  $handler->display->display_options['filters']['field_offer_dato_value_1']['id'] = 'field_offer_dato_value_1';
  $handler->display->display_options['filters']['field_offer_dato_value_1']['table'] = 'field_data_field_offer_dato';
  $handler->display->display_options['filters']['field_offer_dato_value_1']['field'] = 'field_offer_dato_value';
  $handler->display->display_options['filters']['field_offer_dato_value_1']['relationship'] = 'field_reference_product_id';
  $handler->display->display_options['filters']['field_offer_dato_value_1']['operator'] = '<=';
  $handler->display->display_options['filters']['field_offer_dato_value_1']['group'] = 2;
  $handler->display->display_options['filters']['field_offer_dato_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_offer_dato_value_1']['expose']['operator_id'] = 'field_offer_dato_value_1_op';
  $handler->display->display_options['filters']['field_offer_dato_value_1']['expose']['label'] = 'Til:';
  $handler->display->display_options['filters']['field_offer_dato_value_1']['expose']['operator'] = 'field_offer_dato_value_1_op';
  $handler->display->display_options['filters']['field_offer_dato_value_1']['expose']['identifier'] = 'field_offer_dato_value_1';
  $handler->display->display_options['filters']['field_offer_dato_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_offer_dato_value_1']['form_type'] = 'date_popup';
  /* Filterkriterie: Commerce Product: Dato og tidspunkt for sidste ordre (field_dato_og_tidspunkt_for_sids) */
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['id'] = 'field_dato_og_tidspunkt_for_sids_value';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['table'] = 'field_data_field_dato_og_tidspunkt_for_sids';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['field'] = 'field_dato_og_tidspunkt_for_sids_value';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['relationship'] = 'field_reference_product_id';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['default_date'] = 'now';
  $handler->display->display_options['argument_input'] = array(
    'term_node_tid_depth' => array(
      'type' => 'user',
      'context' => 'entity:user.cancel-url',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Har taksonomiterm ID (med dybde)',
    ),
  );
  $export['Produktvisning_paa_kategoriside'] = $view;

  $view = new view();
  $view->name = 'kategori_beskrivelse';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Kategori beskrivelse';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Ord i ordforråd: Kategoribillede */
  $handler->display->display_options['fields']['field_kategoribillede']['id'] = 'field_kategoribillede';
  $handler->display->display_options['fields']['field_kategoribillede']['table'] = 'field_data_field_kategoribillede';
  $handler->display->display_options['fields']['field_kategoribillede']['field'] = 'field_kategoribillede';
  $handler->display->display_options['fields']['field_kategoribillede']['label'] = '';
  $handler->display->display_options['fields']['field_kategoribillede']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_kategoribillede']['element_class'] = 'kategoribillede';
  $handler->display->display_options['fields']['field_kategoribillede']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kategoribillede']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_kategoribillede']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_kategoribillede']['settings'] = array(
    'image_style' => 'offer_list',
    'image_link' => '',
  );
  /* Felt: Ord i ordforråd: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h1';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Felt: Ord i ordforråd: Beskrivelse af term */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Kontekstuelt filter: Ord i ordforråd: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Ord i ordforråd: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['empty'] = '-none';
  /* Felt: Ord i ordforråd: Kategoribillede */
  $handler->display->display_options['fields']['field_kategoribillede']['id'] = 'field_kategoribillede';
  $handler->display->display_options['fields']['field_kategoribillede']['table'] = 'field_data_field_kategoribillede';
  $handler->display->display_options['fields']['field_kategoribillede']['field'] = 'field_kategoribillede';
  $handler->display->display_options['fields']['field_kategoribillede']['label'] = '';
  $handler->display->display_options['fields']['field_kategoribillede']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_kategoribillede']['element_class'] = 'kategoribillede term[tid]';
  $handler->display->display_options['fields']['field_kategoribillede']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kategoribillede']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_kategoribillede']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_kategoribillede']['settings'] = array(
    'image_style' => 'category_header',
    'image_link' => '',
  );
  /* Felt: Ord i ordforråd: Forside overskrift */
  $handler->display->display_options['fields']['field_front_page_title']['id'] = 'field_front_page_title';
  $handler->display->display_options['fields']['field_front_page_title']['table'] = 'field_data_field_front_page_title';
  $handler->display->display_options['fields']['field_front_page_title']['field'] = 'field_front_page_title';
  $handler->display->display_options['fields']['field_front_page_title']['label'] = '';
  $handler->display->display_options['fields']['field_front_page_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_front_page_title']['element_label_colon'] = FALSE;
  /* Felt: Ord i ordforråd: Kort billede */
  $handler->display->display_options['fields']['field_map_image_header']['id'] = 'field_map_image_header';
  $handler->display->display_options['fields']['field_map_image_header']['table'] = 'field_data_field_map_image_header';
  $handler->display->display_options['fields']['field_map_image_header']['field'] = 'field_map_image_header';
  $handler->display->display_options['fields']['field_map_image_header']['label'] = '';
  $handler->display->display_options['fields']['field_map_image_header']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_map_image_header']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_map_image_header']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_map_image_header']['settings'] = array(
    'image_style' => 'category_map_header',
    'image_link' => '',
  );
  /* Felt: Ord i ordforråd: Kort billede */
  $handler->display->display_options['fields']['field_map_image_header_1']['id'] = 'field_map_image_header_1';
  $handler->display->display_options['fields']['field_map_image_header_1']['table'] = 'field_data_field_map_image_header';
  $handler->display->display_options['fields']['field_map_image_header_1']['field'] = 'field_map_image_header';
  $handler->display->display_options['fields']['field_map_image_header_1']['label'] = '';
  $handler->display->display_options['fields']['field_map_image_header_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_map_image_header_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_map_image_header_1']['alter']['text'] = 'with-picture';
  $handler->display->display_options['fields']['field_map_image_header_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_map_image_header_1']['empty'] = 'no-picture';
  $handler->display->display_options['fields']['field_map_image_header_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_map_image_header_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Felt: Ord i ordforråd: Beskrivelse */
  $handler->display->display_options['fields']['description_field']['id'] = 'description_field';
  $handler->display->display_options['fields']['description_field']['table'] = 'field_data_description_field';
  $handler->display->display_options['fields']['description_field']['field'] = 'description_field';
  $handler->display->display_options['fields']['description_field']['label'] = '';
  $handler->display->display_options['fields']['description_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description_field']['link_to_entity'] = 0;
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="bubble"><span class="bubble-left [field_map_image_header_1]"><span class="title term[tid]">[field_front_page_title]</span><span class="description">[description_field]</span></span><span class="bubble-right"><span class="map-image">[field_map_image_header]</span></span></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'user',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Ord i ordforråd: Term ID',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['kategori_beskrivelse'] = $view;

  $view = new view();
  $view->name = 'kategorivisning';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Kategorivisning';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'geografi-list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Ord i ordforråd: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Sorteringskriterie: Ordforråd: Vægt */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Kontekstuelt filter: Ord i ordforråd: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';

  /* Display: Frontpage category display */
  $handler = $view->new_display('panel_pane', 'Frontpage category display', 'panel_pane_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'front category-view ';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Sidefod: Global: View-område */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'Produktvisning_paa_kategoriside:block_1';
  $handler->display->display_options['footer']['view']['inherit_arguments'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Ord i ordforråd: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Felt: Ord i ordforråd: Forside overskrift */
  $handler->display->display_options['fields']['field_front_page_title']['id'] = 'field_front_page_title';
  $handler->display->display_options['fields']['field_front_page_title']['table'] = 'field_data_field_front_page_title';
  $handler->display->display_options['fields']['field_front_page_title']['field'] = 'field_front_page_title';
  $handler->display->display_options['fields']['field_front_page_title']['label'] = '';
  $handler->display->display_options['fields']['field_front_page_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_front_page_title']['element_label_colon'] = FALSE;
  /* Felt: Ord i ordforråd: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[field_front_page_title]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'term[tid]';
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Felt: Ord i ordforråd: Forside beskrivelse */
  $handler->display->display_options['fields']['field_front_page_description']['id'] = 'field_front_page_description';
  $handler->display->display_options['fields']['field_front_page_description']['table'] = 'field_data_field_front_page_description';
  $handler->display->display_options['fields']['field_front_page_description']['field'] = 'field_front_page_description';
  $handler->display->display_options['fields']['field_front_page_description']['label'] = '';
  $handler->display->display_options['fields']['field_front_page_description']['element_label_colon'] = FALSE;
  /* Felt: Ord i ordforråd: Navn */
  $handler->display->display_options['fields']['name_field']['id'] = 'name_field';
  $handler->display->display_options['fields']['name_field']['table'] = 'field_data_name_field';
  $handler->display->display_options['fields']['name_field']['field'] = 'name_field';
  $handler->display->display_options['fields']['name_field']['label'] = '';
  $handler->display->display_options['fields']['name_field']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_field']['alter']['text'] = '<span class="btn btn-medium">Se alle oplevelser</span>';
  $handler->display->display_options['fields']['name_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_field']['element_wrapper_class'] = 'see-all';
  $handler->display->display_options['fields']['name_field']['link_to_entity'] = 1;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Ordforråd: Vægt */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Ord i ordforråd: Forfrem til forside (field_forfrem_til_forside) */
  $handler->display->display_options['filters']['field_forfrem_til_forside_value']['id'] = 'field_forfrem_til_forside_value';
  $handler->display->display_options['filters']['field_forfrem_til_forside_value']['table'] = 'field_data_field_forfrem_til_forside';
  $handler->display->display_options['filters']['field_forfrem_til_forside_value']['field'] = 'field_forfrem_til_forside_value';
  $handler->display->display_options['filters']['field_forfrem_til_forside_value']['operator'] = 'not empty';
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'user',
      'context' => 'entity:user.cancel-url',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Ord i ordforråd: Term ID',
    ),
  );

  /* Display: Category list */
  $handler = $view->new_display('block', 'Category list', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'category-list';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Ord i ordforråd: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  /* Felt: Ord i ordforråd: Forside overskrift */
  $handler->display->display_options['fields']['field_front_page_title']['id'] = 'field_front_page_title';
  $handler->display->display_options['fields']['field_front_page_title']['table'] = 'field_data_field_front_page_title';
  $handler->display->display_options['fields']['field_front_page_title']['field'] = 'field_front_page_title';
  $handler->display->display_options['fields']['field_front_page_title']['label'] = '';
  $handler->display->display_options['fields']['field_front_page_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_front_page_title']['element_wrapper_class'] = 'term[tid]';
  $handler->display->display_options['fields']['field_front_page_title']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_front_page_title']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Ordforråd: Vægt */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Ord i ordforråd: Ordforråd */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    2 => '2',
  );
  /* Filterkriterie: Ord i ordforråd: Forside overskrift (field_front_page_title) */
  $handler->display->display_options['filters']['field_front_page_title_value']['id'] = 'field_front_page_title_value';
  $handler->display->display_options['filters']['field_front_page_title_value']['table'] = 'field_data_field_front_page_title';
  $handler->display->display_options['filters']['field_front_page_title_value']['field'] = 'field_front_page_title_value';
  $handler->display->display_options['filters']['field_front_page_title_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_front_page_title_value']['value'] = 'Oplev Fyn';

  /* Display: Geografi list */
  $handler = $view->new_display('block', 'Geografi list', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Book og køb oplevelser i:';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = 'Book og køb oplevelser i:';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Ord i ordforråd: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Felt: Ord i ordforråd: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['text'] = 'Navn" alt="test';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_class'] = 'term[tid]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Ordforråd: Vægt */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Sorteringskriterie: Ord i ordforråd: Navn */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Ord i ordforråd: Ordforråd */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    7 => '7',
  );

  /* Display: Category list menu */
  $handler = $view->new_display('block', 'Category list menu', 'category_list_menu');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Ord i ordforråd: Forside overskrift */
  $handler->display->display_options['fields']['field_front_page_title']['id'] = 'field_front_page_title';
  $handler->display->display_options['fields']['field_front_page_title']['table'] = 'field_data_field_front_page_title';
  $handler->display->display_options['fields']['field_front_page_title']['field'] = 'field_front_page_title';
  $handler->display->display_options['fields']['field_front_page_title']['label'] = '';
  $handler->display->display_options['fields']['field_front_page_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_front_page_title']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_front_page_title']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Ordforråd: Vægt */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Ord i ordforråd: Ordforråd */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    2 => '2',
  );
  /* Filterkriterie: Ord i ordforråd: Forside overskrift (field_front_page_title) */
  $handler->display->display_options['filters']['field_front_page_title_value']['id'] = 'field_front_page_title_value';
  $handler->display->display_options['filters']['field_front_page_title_value']['table'] = 'field_data_field_front_page_title';
  $handler->display->display_options['filters']['field_front_page_title_value']['field'] = 'field_front_page_title_value';
  $handler->display->display_options['filters']['field_front_page_title_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_front_page_title_value']['value'] = 'Oplev Fyn';
  $export['kategorivisning'] = $view;

  $view = new view();
  $view->name = 'offer_additionlal_info';
  $view->description = 'Contains info panes for product view';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Additional info';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="additional-header">Se også vores andre tilbud</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Forbindelse: Indhold: Refereret produkt */
  $handler->display->display_options['relationships']['field_reference_product_id']['id'] = 'field_reference_product_id';
  $handler->display->display_options['relationships']['field_reference_product_id']['table'] = 'field_data_field_reference';
  $handler->display->display_options['relationships']['field_reference_product_id']['field'] = 'field_reference_product_id';
  /* Felt: Indhold: Tårne kategori */
  $handler->display->display_options['fields']['field_offer_type']['id'] = 'field_offer_type';
  $handler->display->display_options['fields']['field_offer_type']['table'] = 'field_data_field_offer_type';
  $handler->display->display_options['fields']['field_offer_type']['field'] = 'field_offer_type';
  $handler->display->display_options['fields']['field_offer_type']['label'] = '';
  $handler->display->display_options['fields']['field_offer_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_offer_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_type']['delta_offset'] = '0';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Underoverskrift */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_subtitle']['alter']['text'] = '<div class="offer-subtitle">[field_subtitle]</div>';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_subtitle']['settings'] = array(
    'trim_length' => '600',
  );
  /* Sorteringskriterie: Global: Tilfældig */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'offer' => 'offer',
  );
  /* Filterkriterie: Indhold: Forfremmet til forside */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Tilknyt produkt */
  $handler->display->display_options['fields']['field_reference']['id'] = 'field_reference';
  $handler->display->display_options['fields']['field_reference']['table'] = 'field_data_field_reference';
  $handler->display->display_options['fields']['field_reference']['field'] = 'field_reference';
  $handler->display->display_options['fields']['field_reference']['label'] = '';
  $handler->display->display_options['fields']['field_reference']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reference']['settings'] = array(
    'show_quantity' => 0,
    'default_quantity' => '1',
    'combine' => 1,
    'line_item_type' => 0,
  );
  $handler->display->display_options['fields']['field_reference']['delta_offset'] = '0';
  /* Felt: Indhold: Beskrivelse */
  $handler->display->display_options['fields']['field_offer_you_get']['id'] = 'field_offer_you_get';
  $handler->display->display_options['fields']['field_offer_you_get']['table'] = 'field_data_field_offer_you_get';
  $handler->display->display_options['fields']['field_offer_you_get']['field'] = 'field_offer_you_get';
  $handler->display->display_options['fields']['field_offer_you_get']['label'] = '';
  $handler->display->display_options['fields']['field_offer_you_get']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_offer_you_get']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Varighed */
  $handler->display->display_options['fields']['field_varighed']['id'] = 'field_varighed';
  $handler->display->display_options['fields']['field_varighed']['table'] = 'field_data_field_varighed';
  $handler->display->display_options['fields']['field_varighed']['field'] = 'field_varighed';
  $handler->display->display_options['fields']['field_varighed']['label'] = '';
  $handler->display->display_options['fields']['field_varighed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_varighed']['alter']['text'] = '<div class="varighed"><span class="etikette">Varighed:</span>[field_varighed]</div>';
  $handler->display->display_options['fields']['field_varighed']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Alder */
  $handler->display->display_options['fields']['field_alder']['id'] = 'field_alder';
  $handler->display->display_options['fields']['field_alder']['table'] = 'field_data_field_alder';
  $handler->display->display_options['fields']['field_alder']['field'] = 'field_alder';
  $handler->display->display_options['fields']['field_alder']['label'] = '';
  $handler->display->display_options['fields']['field_alder']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_alder']['alter']['text'] = '<div class="alderskrav"><span class="etikette">Alderskrav:</span>[field_alder]</div>';
  $handler->display->display_options['fields']['field_alder']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_alder']['type'] = 'text_plain';
  /* Felt: Indhold: Diplom */
  $handler->display->display_options['fields']['field_diplom']['id'] = 'field_diplom';
  $handler->display->display_options['fields']['field_diplom']['table'] = 'field_data_field_diplom';
  $handler->display->display_options['fields']['field_diplom']['field'] = 'field_diplom';
  $handler->display->display_options['fields']['field_diplom']['label'] = '';
  $handler->display->display_options['fields']['field_diplom']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_diplom']['alter']['text'] = '<div class="diplom"><span class="etikette">Diplom:</span>[field_diplom]</div>';
  $handler->display->display_options['fields']['field_diplom']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Forplejning */
  $handler->display->display_options['fields']['field_forplejning']['id'] = 'field_forplejning';
  $handler->display->display_options['fields']['field_forplejning']['table'] = 'field_data_field_forplejning';
  $handler->display->display_options['fields']['field_forplejning']['field'] = 'field_forplejning';
  $handler->display->display_options['fields']['field_forplejning']['label'] = '';
  $handler->display->display_options['fields']['field_forplejning']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_forplejning']['alter']['text'] = '<div class="forplejning"><span class="etikette">Forplejning:</span>[field_forplejning]</div>';
  $handler->display->display_options['fields']['field_forplejning']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Husk */
  $handler->display->display_options['fields']['field_husk']['id'] = 'field_husk';
  $handler->display->display_options['fields']['field_husk']['table'] = 'field_data_field_husk';
  $handler->display->display_options['fields']['field_husk']['field'] = 'field_husk';
  $handler->display->display_options['fields']['field_husk']['label'] = '';
  $handler->display->display_options['fields']['field_husk']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_husk']['alter']['text'] = '<div class="husk"><span class="etikette">Husk:</span>[field_husk]</div>';
  $handler->display->display_options['fields']['field_husk']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Mødested */
  $handler->display->display_options['fields']['field_m_dested']['id'] = 'field_m_dested';
  $handler->display->display_options['fields']['field_m_dested']['table'] = 'field_data_field_m_dested';
  $handler->display->display_options['fields']['field_m_dested']['field'] = 'field_m_dested';
  $handler->display->display_options['fields']['field_m_dested']['label'] = '';
  $handler->display->display_options['fields']['field_m_dested']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_m_dested']['alter']['text'] = '<div class="modested"><span class="etikette">Mødested:</span>[field_m_dested]</div>';
  $handler->display->display_options['fields']['field_m_dested']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Sikkerhed */
  $handler->display->display_options['fields']['field_sikkerhed']['id'] = 'field_sikkerhed';
  $handler->display->display_options['fields']['field_sikkerhed']['table'] = 'field_data_field_sikkerhed';
  $handler->display->display_options['fields']['field_sikkerhed']['field'] = 'field_sikkerhed';
  $handler->display->display_options['fields']['field_sikkerhed']['label'] = '';
  $handler->display->display_options['fields']['field_sikkerhed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sikkerhed']['alter']['text'] = '<div class="sikkerhed"><span class="etikette">Sikkerhed:</span>[field_sikkerhed]</div>';
  $handler->display->display_options['fields']['field_sikkerhed']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Gyldighed */
  $handler->display->display_options['fields']['field_validity']['id'] = 'field_validity';
  $handler->display->display_options['fields']['field_validity']['table'] = 'field_data_field_validity';
  $handler->display->display_options['fields']['field_validity']['field'] = 'field_validity';
  $handler->display->display_options['fields']['field_validity']['label'] = '';
  $handler->display->display_options['fields']['field_validity']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_validity']['alter']['text'] = '<div class="sikkerhed"><span class="etikette">Gyldighed:</span>[field_validity]</div>';
  $handler->display->display_options['fields']['field_validity']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Beskrivelse for prisen */
  $handler->display->display_options['fields']['field_offer_price_description']['id'] = 'field_offer_price_description';
  $handler->display->display_options['fields']['field_offer_price_description']['table'] = 'field_data_field_offer_price_description';
  $handler->display->display_options['fields']['field_offer_price_description']['field'] = 'field_offer_price_description';
  $handler->display->display_options['fields']['field_offer_price_description']['label'] = '';
  $handler->display->display_options['fields']['field_offer_price_description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_offer_price_description']['alter']['text'] = '<div class="sikkerhed">[field_offer_price_description]</div>';
  $handler->display->display_options['fields']['field_offer_price_description']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Alle taksonomitermer */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = '';
  $handler->display->display_options['fields']['term_node_tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['alter']['text'] = '<a href=/offers?field_offer_type_tid[]=[term_node_tid-tid] class=[term_node_tid-name]><div class="category"></div></a>';
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'offer_type' => 'offer_type',
    'geografi' => 0,
    'sale' => 0,
    'weeks' => 0,
    'tags' => 0,
    'prices' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Contact */
  $handler = $view->new_display('panel_pane', 'Contact', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php print t(\'Contact information\'); ?>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Aktør navn */
  $handler->display->display_options['fields']['field_seller_name']['id'] = 'field_seller_name';
  $handler->display->display_options['fields']['field_seller_name']['table'] = 'field_data_field_seller_name';
  $handler->display->display_options['fields']['field_seller_name']['field'] = 'field_seller_name';
  $handler->display->display_options['fields']['field_seller_name']['label'] = '';
  $handler->display->display_options['fields']['field_seller_name']['element_label_colon'] = FALSE;
  /* Felt: Lokation: Adresse */
  $handler->display->display_options['fields']['address']['id'] = 'address';
  $handler->display->display_options['fields']['address']['table'] = 'location';
  $handler->display->display_options['fields']['address']['field'] = 'address';
  $handler->display->display_options['fields']['address']['label'] = '';
  $handler->display->display_options['fields']['address']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['address']['hide'] = array(
    'country_name' => 'country_name',
    'map_link' => 'map_link',
    'name' => 0,
    'street' => 0,
    'additional' => 0,
    'city' => 0,
    'province' => 0,
    'postal_code' => 0,
    'country' => 0,
    'locpick' => 0,
    'province_name' => 0,
    'coords' => 0,
  );
  /* Felt: Indhold: Mobil */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['alter']['text'] = 'Tlf.: +45 [field_phone-value]';
  $handler->display->display_options['fields']['field_phone']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_phone']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_phone']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_phone']['multi_type'] = 'ul';
  /* Felt: Indhold: e-mail */
  $handler->display->display_options['fields']['field_offer_email']['id'] = 'field_offer_email';
  $handler->display->display_options['fields']['field_offer_email']['table'] = 'field_data_field_offer_email';
  $handler->display->display_options['fields']['field_offer_email']['field'] = 'field_offer_email';
  $handler->display->display_options['fields']['field_offer_email']['label'] = '';
  $handler->display->display_options['fields']['field_offer_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_offer_email']['alter']['text'] = 'Mail: <a href=mailto:[field_offer_email-email]>[field_offer_email]</a>';
  $handler->display->display_options['fields']['field_offer_email']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['field_offer_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_email']['hide_empty'] = TRUE;
  /* Felt: Indhold: Web */
  $handler->display->display_options['fields']['field_offer_url']['id'] = 'field_offer_url';
  $handler->display->display_options['fields']['field_offer_url']['table'] = 'field_data_field_offer_url';
  $handler->display->display_options['fields']['field_offer_url']['field'] = 'field_offer_url';
  $handler->display->display_options['fields']['field_offer_url']['label'] = '';
  $handler->display->display_options['fields']['field_offer_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_offer_url']['alter']['text'] = 'Web: <a href=[field_offer_url-url]>[field_offer_url-title]</a>';
  $handler->display->display_options['fields']['field_offer_url']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['field_offer_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_url']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_offer_url']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Additional offers */
  $handler = $view->new_display('block', 'Additional offers', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'additional-offers';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Indhold: Refereret produkt */
  $handler->display->display_options['relationships']['field_reference_product_id']['id'] = 'field_reference_product_id';
  $handler->display->display_options['relationships']['field_reference_product_id']['table'] = 'field_data_field_reference';
  $handler->display->display_options['relationships']['field_reference_product_id']['field'] = 'field_reference_product_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Fotos */
  $handler->display->display_options['fields']['field_offer_images']['id'] = 'field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['table'] = 'field_data_field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['field'] = 'field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['label'] = '';
  $handler->display->display_options['fields']['field_offer_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_offer_images']['settings'] = array(
    'image_style' => 'additional_offers',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_offer_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_offer_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_offer_images']['delta_first_last'] = TRUE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'offer' => 'offer',
  );
  /* Filterkriterie: Indhold: Forfremmet til forside */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filterkriterie: Commerce Product: Dato og tidspunkt for sidste ordre (field_dato_og_tidspunkt_for_sids) */
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['id'] = 'field_dato_og_tidspunkt_for_sids_value';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['table'] = 'field_data_field_dato_og_tidspunkt_for_sids';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['field'] = 'field_dato_og_tidspunkt_for_sids_value';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['relationship'] = 'field_reference_product_id';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['default_date'] = 'now';

  /* Display: title */
  $handler = $view->new_display('block', 'title', 'block_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'product-view';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Indhold: Refereret produkt */
  $handler->display->display_options['relationships']['field_reference_product_id']['id'] = 'field_reference_product_id';
  $handler->display->display_options['relationships']['field_reference_product_id']['table'] = 'field_data_field_reference';
  $handler->display->display_options['relationships']['field_reference_product_id']['field'] = 'field_reference_product_id';
  /* Forbindelse: Indhold: Taksonomitermer på node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'offer_type' => 'offer_type',
    'geografi' => 0,
    'prices' => 0,
    'sale' => 0,
    'tags' => 0,
    'weeks' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Ord i ordforråd: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Felt: Felt: Titel */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['element_wrapper_class'] = 'term[tid]';
  $handler->display->display_options['fields']['title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Felt: Indhold: Underoverskrift */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_subtitle']['alter']['text'] = '<div class="offer-subtitle">[field_subtitle]</div>';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_subtitle']['settings'] = array(
    'trim_length' => '600',
  );
  /* Felt: Indhold: Fotos */
  $handler->display->display_options['fields']['field_offer_images']['id'] = 'field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['table'] = 'field_data_field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['field'] = 'field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['label'] = '';
  $handler->display->display_options['fields']['field_offer_images']['alter']['text'] = '[field_offer_images]';
  $handler->display->display_options['fields']['field_offer_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_offer_images']['settings'] = array(
    'image_style' => 'offer_view_first',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_offer_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_offer_images']['delta_offset'] = '0';
  /* Felt: Indhold: Fotos */
  $handler->display->display_options['fields']['field_offer_images_1']['id'] = 'field_offer_images_1';
  $handler->display->display_options['fields']['field_offer_images_1']['table'] = 'field_data_field_offer_images';
  $handler->display->display_options['fields']['field_offer_images_1']['field'] = 'field_offer_images';
  $handler->display->display_options['fields']['field_offer_images_1']['label'] = '';
  $handler->display->display_options['fields']['field_offer_images_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_images_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_offer_images_1']['settings'] = array(
    'image_style' => 'offer_view_second',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_offer_images_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_offer_images_1']['delta_offset'] = '1';
  /* Felt: Indhold: Fotos */
  $handler->display->display_options['fields']['field_offer_images_2']['id'] = 'field_offer_images_2';
  $handler->display->display_options['fields']['field_offer_images_2']['table'] = 'field_data_field_offer_images';
  $handler->display->display_options['fields']['field_offer_images_2']['field'] = 'field_offer_images';
  $handler->display->display_options['fields']['field_offer_images_2']['label'] = '';
  $handler->display->display_options['fields']['field_offer_images_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_images_2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_offer_images_2']['settings'] = array(
    'image_style' => 'offer_view_third',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_offer_images_2']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_offer_images_2']['delta_offset'] = '2';

  /* Display: extra description */
  $handler = $view->new_display('block', 'extra description', 'block_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: * Ved ekstra info */
  $handler->display->display_options['fields']['field_asterix_extra_description']['id'] = 'field_asterix_extra_description';
  $handler->display->display_options['fields']['field_asterix_extra_description']['table'] = 'field_data_field_asterix_extra_description';
  $handler->display->display_options['fields']['field_asterix_extra_description']['field'] = 'field_asterix_extra_description';
  $handler->display->display_options['fields']['field_asterix_extra_description']['label'] = '';
  $handler->display->display_options['fields']['field_asterix_extra_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_asterix_extra_description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_asterix_extra_description']['alter']['text'] = '*';
  $handler->display->display_options['fields']['field_asterix_extra_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_asterix_extra_description']['empty_zero'] = TRUE;
  /* Felt: Indhold: Ekstra beskrivelse */
  $handler->display->display_options['fields']['field_extra_description']['id'] = 'field_extra_description';
  $handler->display->display_options['fields']['field_extra_description']['table'] = 'field_data_field_extra_description';
  $handler->display->display_options['fields']['field_extra_description']['field'] = 'field_extra_description';
  $handler->display->display_options['fields']['field_extra_description']['label'] = '';
  $handler->display->display_options['fields']['field_extra_description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_extra_description']['alter']['text'] = '<div class="extra_description"><span class="etikette">[field_asterix_extra_description]Ekstra info:</span>[field_extra_description-value] </div>';
  $handler->display->display_options['fields']['field_extra_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_extra_description']['element_default_classes'] = FALSE;

  /* Display: Offer mail view */
  $handler = $view->new_display('page', 'Offer mail view', 'page_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'offer_mail_view';
  $handler->display->display_options['display_description'] = 'View used to render mails';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Mødested */
  $handler->display->display_options['fields']['field_m_dested']['id'] = 'field_m_dested';
  $handler->display->display_options['fields']['field_m_dested']['table'] = 'field_data_field_m_dested';
  $handler->display->display_options['fields']['field_m_dested']['field'] = 'field_m_dested';
  $handler->display->display_options['fields']['field_m_dested']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_m_dested']['element_class'] = 'field';
  $handler->display->display_options['fields']['field_m_dested']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_m_dested']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['field_m_dested']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Fotos */
  $handler->display->display_options['fields']['field_offer_images_1']['id'] = 'field_offer_images_1';
  $handler->display->display_options['fields']['field_offer_images_1']['table'] = 'field_data_field_offer_images';
  $handler->display->display_options['fields']['field_offer_images_1']['field'] = 'field_offer_images';
  $handler->display->display_options['fields']['field_offer_images_1']['label'] = '';
  $handler->display->display_options['fields']['field_offer_images_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_images_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_offer_images_1']['settings'] = array(
    'image_style' => 'offer_view_first',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_offer_images_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_offer_images_1']['delta_offset'] = '0';
  /* Felt: Lokation: Adresse */
  $handler->display->display_options['fields']['address_1']['id'] = 'address_1';
  $handler->display->display_options['fields']['address_1']['table'] = 'location';
  $handler->display->display_options['fields']['address_1']['field'] = 'address';
  $handler->display->display_options['fields']['address_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['address_1']['element_type'] = 'span';
  $handler->display->display_options['fields']['address_1']['element_class'] = 'field';
  $handler->display->display_options['fields']['address_1']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['address_1']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['address_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['address_1']['empty'] = '&nbsp';
  $handler->display->display_options['fields']['address_1']['hide'] = array(
    'map_link' => 'map_link',
    'name' => 0,
    'street' => 0,
    'additional' => 0,
    'city' => 0,
    'province' => 0,
    'postal_code' => 0,
    'country' => 0,
    'locpick' => 0,
    'province_name' => 0,
    'country_name' => 0,
    'coords' => 0,
  );
  /* Felt: Indhold: Beskrivelse */
  $handler->display->display_options['fields']['field_offer_you_get']['id'] = 'field_offer_you_get';
  $handler->display->display_options['fields']['field_offer_you_get']['table'] = 'field_data_field_offer_you_get';
  $handler->display->display_options['fields']['field_offer_you_get']['field'] = 'field_offer_you_get';
  $handler->display->display_options['fields']['field_offer_you_get']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Varighed */
  $handler->display->display_options['fields']['field_varighed']['id'] = 'field_varighed';
  $handler->display->display_options['fields']['field_varighed']['table'] = 'field_data_field_varighed';
  $handler->display->display_options['fields']['field_varighed']['field'] = 'field_varighed';
  $handler->display->display_options['fields']['field_varighed']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_varighed']['element_class'] = 'field';
  $handler->display->display_options['fields']['field_varighed']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_varighed']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['field_varighed']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Alder */
  $handler->display->display_options['fields']['field_alder']['id'] = 'field_alder';
  $handler->display->display_options['fields']['field_alder']['table'] = 'field_data_field_alder';
  $handler->display->display_options['fields']['field_alder']['field'] = 'field_alder';
  $handler->display->display_options['fields']['field_alder']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_alder']['element_class'] = 'field';
  $handler->display->display_options['fields']['field_alder']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_alder']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['field_alder']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Diplom */
  $handler->display->display_options['fields']['field_diplom']['id'] = 'field_diplom';
  $handler->display->display_options['fields']['field_diplom']['table'] = 'field_data_field_diplom';
  $handler->display->display_options['fields']['field_diplom']['field'] = 'field_diplom';
  $handler->display->display_options['fields']['field_diplom']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_diplom']['element_class'] = 'field';
  $handler->display->display_options['fields']['field_diplom']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_diplom']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['field_diplom']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Forplejning */
  $handler->display->display_options['fields']['field_forplejning']['id'] = 'field_forplejning';
  $handler->display->display_options['fields']['field_forplejning']['table'] = 'field_data_field_forplejning';
  $handler->display->display_options['fields']['field_forplejning']['field'] = 'field_forplejning';
  $handler->display->display_options['fields']['field_forplejning']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_forplejning']['element_class'] = 'field';
  $handler->display->display_options['fields']['field_forplejning']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_forplejning']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['field_forplejning']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Husk */
  $handler->display->display_options['fields']['field_husk']['id'] = 'field_husk';
  $handler->display->display_options['fields']['field_husk']['table'] = 'field_data_field_husk';
  $handler->display->display_options['fields']['field_husk']['field'] = 'field_husk';
  $handler->display->display_options['fields']['field_husk']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_husk']['element_class'] = 'field';
  $handler->display->display_options['fields']['field_husk']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_husk']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['field_husk']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_husk']['empty'] = '<i> </i> ';
  /* Felt: Indhold: Sikkerhed */
  $handler->display->display_options['fields']['field_sikkerhed']['id'] = 'field_sikkerhed';
  $handler->display->display_options['fields']['field_sikkerhed']['table'] = 'field_data_field_sikkerhed';
  $handler->display->display_options['fields']['field_sikkerhed']['field'] = 'field_sikkerhed';
  $handler->display->display_options['fields']['field_sikkerhed']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_sikkerhed']['element_class'] = 'field';
  $handler->display->display_options['fields']['field_sikkerhed']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_sikkerhed']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['field_sikkerhed']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Web */
  $handler->display->display_options['fields']['field_offer_url']['id'] = 'field_offer_url';
  $handler->display->display_options['fields']['field_offer_url']['table'] = 'field_data_field_offer_url';
  $handler->display->display_options['fields']['field_offer_url']['field'] = 'field_offer_url';
  $handler->display->display_options['fields']['field_offer_url']['label'] = 'Hjemmeside';
  $handler->display->display_options['fields']['field_offer_url']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_offer_url']['element_class'] = 'field';
  $handler->display->display_options['fields']['field_offer_url']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_offer_url']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['field_offer_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_offer_url']['click_sort_column'] = 'url';
  /* Felt: Indhold: e-mail */
  $handler->display->display_options['fields']['field_offer_email']['id'] = 'field_offer_email';
  $handler->display->display_options['fields']['field_offer_email']['table'] = 'field_data_field_offer_email';
  $handler->display->display_options['fields']['field_offer_email']['field'] = 'field_offer_email';
  $handler->display->display_options['fields']['field_offer_email']['label'] = 'E-mail';
  $handler->display->display_options['fields']['field_offer_email']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_offer_email']['element_class'] = 'field';
  $handler->display->display_options['fields']['field_offer_email']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_offer_email']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['field_offer_email']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Mobil */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = 'Telefon';
  $handler->display->display_options['fields']['field_phone']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_phone']['element_class'] = 'field';
  $handler->display->display_options['fields']['field_phone']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_phone']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['field_phone']['element_default_classes'] = FALSE;
  $handler->display->display_options['path'] = 'offer_mail_view/%';

  /* Display: Product description */
  $handler = $view->new_display('panel_pane', 'Product description', 'panel_pane_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['display_description'] = 'udviklingfyn';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Tilknyt produkt */
  $handler->display->display_options['fields']['field_reference']['id'] = 'field_reference';
  $handler->display->display_options['fields']['field_reference']['table'] = 'field_data_field_reference';
  $handler->display->display_options['fields']['field_reference']['field'] = 'field_reference';
  $handler->display->display_options['fields']['field_reference']['label'] = '';
  $handler->display->display_options['fields']['field_reference']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reference']['settings'] = array(
    'show_quantity' => 0,
    'default_quantity' => '1',
    'combine' => 1,
    'line_item_type' => 0,
  );
  $handler->display->display_options['fields']['field_reference']['delta_offset'] = '0';
  /* Felt: Indhold: Beskrivelse for prisen */
  $handler->display->display_options['fields']['field_offer_price_description']['id'] = 'field_offer_price_description';
  $handler->display->display_options['fields']['field_offer_price_description']['table'] = 'field_data_field_offer_price_description';
  $handler->display->display_options['fields']['field_offer_price_description']['field'] = 'field_offer_price_description';
  $handler->display->display_options['fields']['field_offer_price_description']['label'] = '';
  $handler->display->display_options['fields']['field_offer_price_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_offer_price_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_price_description']['empty'] = 'Pris';
  /* Felt: Indhold: Beskrivelse */
  $handler->display->display_options['fields']['field_offer_you_get']['id'] = 'field_offer_you_get';
  $handler->display->display_options['fields']['field_offer_you_get']['table'] = 'field_data_field_offer_you_get';
  $handler->display->display_options['fields']['field_offer_you_get']['field'] = 'field_offer_you_get';
  $handler->display->display_options['fields']['field_offer_you_get']['alter']['nl2br'] = TRUE;
  /* Felt: Indhold: Varighed */
  $handler->display->display_options['fields']['field_varighed']['id'] = 'field_varighed';
  $handler->display->display_options['fields']['field_varighed']['table'] = 'field_data_field_varighed';
  $handler->display->display_options['fields']['field_varighed']['field'] = 'field_varighed';
  $handler->display->display_options['fields']['field_varighed']['label'] = '';
  $handler->display->display_options['fields']['field_varighed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_varighed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_varighed']['alter']['text'] = '<div class="varighed"><span class="etikette">Varighed:</span>[field_varighed]</div>';
  $handler->display->display_options['fields']['field_varighed']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Alder */
  $handler->display->display_options['fields']['field_alder']['id'] = 'field_alder';
  $handler->display->display_options['fields']['field_alder']['table'] = 'field_data_field_alder';
  $handler->display->display_options['fields']['field_alder']['field'] = 'field_alder';
  $handler->display->display_options['fields']['field_alder']['label'] = '';
  $handler->display->display_options['fields']['field_alder']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_alder']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_alder']['alter']['text'] = '<div class="alderskrav"><span class="etikette">Alderskrav:</span>[field_alder]</div>';
  $handler->display->display_options['fields']['field_alder']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_alder']['type'] = 'text_plain';
  /* Felt: Indhold: Diplom */
  $handler->display->display_options['fields']['field_diplom']['id'] = 'field_diplom';
  $handler->display->display_options['fields']['field_diplom']['table'] = 'field_data_field_diplom';
  $handler->display->display_options['fields']['field_diplom']['field'] = 'field_diplom';
  $handler->display->display_options['fields']['field_diplom']['label'] = '';
  $handler->display->display_options['fields']['field_diplom']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_diplom']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_diplom']['alter']['text'] = '<div class="diplom"><span class="etikette">Diplom:</span>[field_diplom]</div>';
  $handler->display->display_options['fields']['field_diplom']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Forplejning */
  $handler->display->display_options['fields']['field_forplejning']['id'] = 'field_forplejning';
  $handler->display->display_options['fields']['field_forplejning']['table'] = 'field_data_field_forplejning';
  $handler->display->display_options['fields']['field_forplejning']['field'] = 'field_forplejning';
  $handler->display->display_options['fields']['field_forplejning']['label'] = '';
  $handler->display->display_options['fields']['field_forplejning']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_forplejning']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_forplejning']['alter']['text'] = '<div class="forplejning"><span class="etikette">Forplejning:</span>[field_forplejning]</div>';
  $handler->display->display_options['fields']['field_forplejning']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Husk */
  $handler->display->display_options['fields']['field_husk']['id'] = 'field_husk';
  $handler->display->display_options['fields']['field_husk']['table'] = 'field_data_field_husk';
  $handler->display->display_options['fields']['field_husk']['field'] = 'field_husk';
  $handler->display->display_options['fields']['field_husk']['label'] = '';
  $handler->display->display_options['fields']['field_husk']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_husk']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_husk']['alter']['text'] = '<div class="husk"><span class="etikette">Husk:</span>[field_husk]</div>';
  $handler->display->display_options['fields']['field_husk']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Mødested */
  $handler->display->display_options['fields']['field_m_dested']['id'] = 'field_m_dested';
  $handler->display->display_options['fields']['field_m_dested']['table'] = 'field_data_field_m_dested';
  $handler->display->display_options['fields']['field_m_dested']['field'] = 'field_m_dested';
  $handler->display->display_options['fields']['field_m_dested']['label'] = '';
  $handler->display->display_options['fields']['field_m_dested']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_m_dested']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_m_dested']['alter']['text'] = '<div class="modested"><span class="etikette">Mødested:</span>[field_m_dested]</div>';
  $handler->display->display_options['fields']['field_m_dested']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Sikkerhed */
  $handler->display->display_options['fields']['field_sikkerhed']['id'] = 'field_sikkerhed';
  $handler->display->display_options['fields']['field_sikkerhed']['table'] = 'field_data_field_sikkerhed';
  $handler->display->display_options['fields']['field_sikkerhed']['field'] = 'field_sikkerhed';
  $handler->display->display_options['fields']['field_sikkerhed']['label'] = '';
  $handler->display->display_options['fields']['field_sikkerhed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sikkerhed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sikkerhed']['alter']['text'] = '<div class="sikkerhed"><span class="etikette">Sikkerhed:</span>[field_sikkerhed]</div>';
  $handler->display->display_options['fields']['field_sikkerhed']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Alle taksonomitermer */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = '';
  $handler->display->display_options['fields']['term_node_tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['alter']['text'] = '<a href=/offers?field_offer_type_tid[]=[term_node_tid-tid] class=[term_node_tid-name]><div class="category"></div></a>';
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'offer_type' => 0,
    'tags' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $export['offer_additionlal_info'] = $view;

  $view = new view();
  $view->name = 'related_products';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Relaterede produkter';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'product-list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'product';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Forbindelse: Indhold: Taksonomitermer på node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'offer_type' => 'offer_type',
    'geografi' => 0,
    'prices' => 0,
    'sale' => 0,
    'tags' => 0,
    'weeks' => 0,
  );
  /* Felt: Ord i ordforråd: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  /* Felt: Indhold: Knaptekst */
  $handler->display->display_options['fields']['field_knaptekst']['id'] = 'field_knaptekst';
  $handler->display->display_options['fields']['field_knaptekst']['table'] = 'field_data_field_knaptekst';
  $handler->display->display_options['fields']['field_knaptekst']['field'] = 'field_knaptekst';
  $handler->display->display_options['fields']['field_knaptekst']['label'] = '';
  $handler->display->display_options['fields']['field_knaptekst']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_knaptekst']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_knaptekst']['empty'] = 'Book nu';
  /* Felt: Felt: Titel */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['element_wrapper_class'] = 'term[tid]';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Felt: Indhold: Underoverskrift */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_subtitle']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Felt: Indhold: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<span class="btn btn-small">[field_knaptekst]</span>';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Fotos */
  $handler->display->display_options['fields']['field_offer_images']['id'] = 'field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['table'] = 'field_data_field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['field'] = 'field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['label'] = '';
  $handler->display->display_options['fields']['field_offer_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_offer_images']['settings'] = array(
    'image_style' => 'offer_list',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_offer_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_offer_images']['delta_offset'] = '0';
  /* Sorteringskriterie: Global: Tilfældig */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'offer' => 'offer',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Indhold: Udløbsdato (field_udl_bsdato) */
  $handler->display->display_options['filters']['field_udl_bsdato_value']['id'] = 'field_udl_bsdato_value';
  $handler->display->display_options['filters']['field_udl_bsdato_value']['table'] = 'field_data_field_udl_bsdato';
  $handler->display->display_options['filters']['field_udl_bsdato_value']['field'] = 'field_udl_bsdato_value';
  $handler->display->display_options['filters']['field_udl_bsdato_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_udl_bsdato_value']['group'] = 2;
  $handler->display->display_options['filters']['field_udl_bsdato_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_udl_bsdato_value']['default_date'] = 'now';
  /* Filterkriterie: Indhold: Udløbsdato (field_udl_bsdato) */
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['id'] = 'field_udl_bsdato_value_1';
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['table'] = 'field_data_field_udl_bsdato';
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['field'] = 'field_udl_bsdato_value';
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['group'] = 2;
  $handler->display->display_options['filters']['field_udl_bsdato_value_1']['granularity'] = 'minute';

  /* Display: Sal */
  $handler = $view->new_display('block', 'Sal', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Sale kategori (field_sale_kategori) */
  $handler->display->display_options['arguments']['field_sale_kategori_tid']['id'] = 'field_sale_kategori_tid';
  $handler->display->display_options['arguments']['field_sale_kategori_tid']['table'] = 'field_data_field_sale_kategori';
  $handler->display->display_options['arguments']['field_sale_kategori_tid']['field'] = 'field_sale_kategori_tid';
  $handler->display->display_options['arguments']['field_sale_kategori_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_sale_kategori_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_sale_kategori_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_sale_kategori_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_sale_kategori_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_sale_kategori_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_sale_kategori_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_sale_kategori_tid']['validate_options']['vocabularies'] = array(
    'sale' => 'sale',
  );

  /* Display: Tårn */
  $handler = $view->new_display('block', 'Tårn', 'block_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Indhold: Taksonomitermer på node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'offer_type' => 'offer_type',
    'geografi' => 0,
    'sale' => 0,
    'weeks' => 0,
    'tags' => 0,
    'prices' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Tårne kategori (field_offer_type) */
  $handler->display->display_options['arguments']['field_offer_type_tid']['id'] = 'field_offer_type_tid';
  $handler->display->display_options['arguments']['field_offer_type_tid']['table'] = 'field_data_field_offer_type';
  $handler->display->display_options['arguments']['field_offer_type_tid']['field'] = 'field_offer_type_tid';
  $handler->display->display_options['arguments']['field_offer_type_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_offer_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_offer_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_offer_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_offer_type_tid']['summary_options']['items_per_page'] = '25';

  /* Display: Geografi */
  $handler = $view->new_display('block', 'Geografi', 'block_3');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Geografi kategori (field_geografi_kategori) */
  $handler->display->display_options['arguments']['field_geografi_kategori_tid']['id'] = 'field_geografi_kategori_tid';
  $handler->display->display_options['arguments']['field_geografi_kategori_tid']['table'] = 'field_data_field_geografi_kategori';
  $handler->display->display_options['arguments']['field_geografi_kategori_tid']['field'] = 'field_geografi_kategori_tid';
  $handler->display->display_options['arguments']['field_geografi_kategori_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_geografi_kategori_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_geografi_kategori_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_geografi_kategori_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_geografi_kategori_tid']['summary_options']['items_per_page'] = '25';

  /* Display: Periode */
  $handler = $view->new_display('block', 'Periode', 'block_4');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Indhold: Taksonomitermer på node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'offer_type' => 'offer_type',
    'geografi' => 0,
    'sale' => 0,
    'weeks' => 0,
    'tags' => 0,
    'prices' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Aktivitets uger (field_activity_weeks) */
  $handler->display->display_options['arguments']['field_activity_weeks_tid']['id'] = 'field_activity_weeks_tid';
  $handler->display->display_options['arguments']['field_activity_weeks_tid']['table'] = 'field_data_field_activity_weeks';
  $handler->display->display_options['arguments']['field_activity_weeks_tid']['field'] = 'field_activity_weeks_tid';
  $handler->display->display_options['arguments']['field_activity_weeks_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_activity_weeks_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_activity_weeks_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_activity_weeks_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_activity_weeks_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_activity_weeks_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_activity_weeks_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_activity_weeks_tid']['validate_options']['vocabularies'] = array(
    'weeks' => 'weeks',
  );
  $handler->display->display_options['arguments']['field_activity_weeks_tid']['validate_options']['type'] = 'tids';
  $export['related_products'] = $view;

  return $export;
}
