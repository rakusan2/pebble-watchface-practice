#include <pebble.h>
static Window *s_m_window;

static void m_window_load(Window *window){
  
}

static void m_window_unload(Window *window){
  
}

static void init(){
  s_m_window = window_create();
  window_set_window_handlers(s_m_window, (WindowHandlers){ .load = m_window_load, .unload = m_window_unload});
  window_stack_push(s_m_window, true);
}

static void deinit(){
  window_destroy(s_m_window);
}

int main(void){
  init();
  app_event_loop();
  deinit();
}