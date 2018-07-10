#include <gtk/gtk.h>

// compiling
// gcc hello.c -o hello $(pkg-config --cflags --libs gtk+-2.0)

static void terminate(GtkWidget *widget, gpointer data) {
    gtk_main_quit();
}

int main(int argc, char *argv[]) {
    GtkWidget *window, *button, *label, *vbox;

    gtk_init(&argc, &argv);

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    vbox = gtk_vbox_new(TRUE, 0);
    gtk_container_add(GTK_CONTAINER(window), vbox);

    label = gtk_label_new("Hello world!");
    gtk_container_add(GTK_CONTAINER(vbox), label);

    button = gtk_button_new_with_label("Quit");
    gtk_container_add(GTK_CONTAINER(vbox), button);
    
    g_signal_connect(button, "clicked", G_CALLBACK(terminate), NULL);
    gtk_widget_show_all(window);
    gtk_main();

    return 0;
}