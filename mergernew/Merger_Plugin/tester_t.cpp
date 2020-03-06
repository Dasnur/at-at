#include "tester_t.h"

void tester_t::fill_left_kf(std::ostream& out) {
  knowledge_field_t kf;

  kf.add_type("канцтовары");
  kf.add_type_value("канцтовары", "ручка");
  kf.add_type_value("канцтовары", "карандаш");
  kf.add_type_value("канцтовары", "линейка");

  kf.add_type("языки_программирования");
  kf.add_type_value("языки_программирования", "с++");
  kf.add_type_value("языки_программирования", "python");

  const temporal_entity_t* coder = kf.add_object("Программист");
  kf.add_attr(coder, "язык", "языки_программирования");
  kf.add_attr(coder, "предмет", "канцтовары");

  const temporal_entity_t* secretary = kf.add_object("Секретарь");
  kf.add_attr(secretary, "язык", "языки_программирования");
  kf.add_attr(secretary, "предмет", "канцтовары");

  const temporal_entity_t* head = kf.add_object("Начальник");
  kf.add_attr(head, "предмет", "канцтовары");

  {
    const temporal_entity_t* event = kf.add_event("Событие_1");
    true_condition_t* true_cond = new true_condition_t();
    kf.add_condition(event, true_cond);

    event = kf.add_event("Событие_2");
    condition_sum_equal_const_t* sum_cond = new condition_sum_equal_const_t();
    sum_cond->add_item(0, 0);
    sum_cond->add_item(1, 1);
    sum_cond->set_value("пусто");
    kf.add_condition(event, sum_cond);

    event = kf.add_event("Событие_3");
    complex_condition_t* cmplx = new complex_condition_t;
    cmplx->set_op("&");
    condition_attr_value_const_t* left = new condition_attr_value_const_t(2, 0, "ручка");
    left->set_op("=");
    condition_attr_value_attr_value_t* right = new condition_attr_value_attr_value_t(2,0, 0, 1);
    right->set_op("=");
    cmplx->add_condition(left);
    cmplx->add_condition(right);
    kf.add_condition(event, cmplx);

    event = kf.add_event("Событие_4");
    condition_attr_value_const_t* cond = new condition_attr_value_const_t(0, 0, "python");
    cond->set_op("=");
    kf.add_condition(event, cond);
  }

  {
    const temporal_entity_t* interval = kf.add_interval("Интервал_1");
    condition_attr_value_const_t* begin_cond = new condition_attr_value_const_t(2, 0, "линейка");
    begin_cond->set_op("=");
    condition_attr_value_const_t* end_cond = new condition_attr_value_const_t(0, 0, "python");
    end_cond->set_op("=");
    kf.set_start_condition(interval, begin_cond);
    kf.set_end_condition(interval, end_cond);
  }

  {
    const temporal_entity_t* rule = kf.add_rule("Правило_1");
    event_event_condition_t* rule_cond = new event_event_condition_t(0, 2);
    rule_cond->set_op("a");
    complex_action_t* action = new complex_action_t();
    action->set_op("&");
    action_int_t* left = new action_int_t();
    left->set_object_id(2);
    left->set_attribute_id(0);
    left->set_value(10);
    left->set_op("=");
    action_string_t* right = new action_string_t();
    right->set_object_id(0);
    right->set_attribute_id(0);
    right->set_value("python");
    right->set_op("=");
    action->add_action(left);
    action->add_action(right);
    kf.add_condition(rule, rule_cond);
    kf.add_action(rule, action);
  }

  std::cout << kf.to_string() << std::endl;

  out << kf.dump() << std::endl;
}

void tester_t::fill_right_kf(std::ostream& out) {
  knowledge_field_t kf;

  kf.add_type("канцтовары");
  kf.add_type_value("канцтовары", "ручка");
  kf.add_type_value("канцтовары", "карандаш");

  kf.add_type("языки_программирования");
  //kf.add_type_value("языки_программирования", "java");
  //kf.add_type_value("языки_программирования", "ruby");
  kf.add_type_value("языки_программирования", "python");

  const temporal_entity_t* coder = kf.add_object("Программист");
  kf.add_attr(coder, "язык", "языки_программирования");
  kf.add_attr(coder, "предмет", "канцтовары");

  const temporal_entity_t* secretary = kf.add_object("Секретарь");
  kf.add_attr(secretary, "язык", "языки_программирования");

  const temporal_entity_t* head = kf.add_object("Начальник");
  kf.add_attr(head, "язык", "языки_программирования");

  {
    const temporal_entity_t* event = kf.add_event("Событие_1");
    condition_attr_value_const_t* cond = new condition_attr_value_const_t(2, 0, "python");
    cond->set_op("=");
    kf.add_condition(event, cond);

    event = kf.add_event("Событие_2");
    cond = new condition_attr_value_const_t(0, 0, "python");
    cond->set_op("=");
    kf.add_condition(event, cond);
  }

  {
    const temporal_entity_t* interval = kf.add_interval("Интервал_1");
    condition_attr_value_const_t* begin_cond = new condition_attr_value_const_t(2, 0, "python");
    begin_cond->set_op("=");
    condition_attr_value_const_t* end_cond = new condition_attr_value_const_t(0, 0, "python");
    end_cond->set_op("=");
    kf.set_start_condition(interval, begin_cond);
    kf.set_end_condition(interval, end_cond);
  }

  {
    const temporal_entity_t* rule = kf.add_rule("Правило_1");
    event_interval_condition_t* rule_cond = new event_interval_condition_t(0, 0);
    rule_cond->set_op("b");
    action_string_t* action = new action_string_t();
    action->set_object_id(1);
    action->set_attribute_id(0);
    action->set_value("python");
    action->set_op("=");
    kf.add_condition(rule, rule_cond);
    kf.add_action(rule, action);
  }

  std::cout << kf.to_string() << std::endl;

  out << kf.dump() << std::endl;
}
