/*
 *   Copyright 2016 ThunderSoft, Inc
 *
 *      http://www.thundersoft.com
 */

#include <gtk/gtk.h>

int main(int argc, char *argv[])
{
    GtkWidget *window;

    gtk_init(&argc, &argv);
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);

    g_signal_connect_swapped(G_OBJECT(window),"destroy",G_CALLBACK(gtk_main_quit), NULL);

    gtk_widget_show(window);

    gtk_main();
    return 0;
}

