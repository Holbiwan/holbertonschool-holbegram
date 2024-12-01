#ifndef FLUTTER_MY_APPLICATION_H_
#define FLUTTER_MY_APPLICATION_H_

#include <gtk/gtk.h>
#include <glib-object.h>

/*
 * MyApplication:
 *
 * A custom GTK-based application for running a Flutter engine.
 * This class is derived from GtkApplication and integrates
 * Flutter capabilities into a GTK-based application framework.
 */

/* Declare MyApplication as a final type inheriting from GtkApplication */
G_DECLARE_FINAL_TYPE(MyApplication, my_application, MY, APPLICATION,
                     GtkApplication)

/**
 * my_application_new:
 *
 * Creates a new Flutter-based application.
 * 
 * This function initializes an instance of `MyApplication`,
 * which is configured to embed and manage a Flutter engine
 * alongside GTK features.
 *
 * Returns: (transfer full): A new #MyApplication instance.
 */
MyApplication* my_application_new();

#endif  // FLUTTER_MY_APPLICATION_H_
