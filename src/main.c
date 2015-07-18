#include <pebble.h>

Window *main_window;
TextLayer *text_layer;

void handle_init(void) {
  main_window = window_create();

  window_set_window_handlers(main_window, (WindowHandlers) {
      .load = main_window_load,
      .unload = main_window_unload
  });
    
  } 
  window_stack_push(main_window, true);
}
static void main_window_load(Window * window) {
  
  
}
static void main_window_unload(Window * window) {
  
  
}

void handle_deinit(void) {
  text_layer_destroy(text_layer);
  window_destroy(main_window);
}

int main(void) {
  handle_init();
  app_event_loop();
  handle_deinit();
}
