//server.c
#include <gtk/gtk.h>



void main(int argc,char *argv[]){

	gtk_init(&argc,&argv);
	
	GtkWidget *window ;
	GtkWidget *button ;

	
	
	
	
	
	window = gtk_window
	
	gtk_window_set_decorated(GTK_WINDOW (window), FALSE);	
	//gtk_window_set_opacity(GTK_WINDOW(window),0.5);
	gtk_widget_add_events(window, GDK_BUTTON_PRESS_MASK);
	gtk_window_set_keep_above((GtkWindow *) window,TRUE);
	gtk_widget_set_size_request(window,50,50);
	gtk_window_set_resizable(GTK_WINDOW(window),FALSE);
	
//	gtk_window_set_default_size(GTK_BUTTON(button),50,50);
	button = gtk_button_new_with_label("hello");

	gtk_container_add(GTK_CONTAINER(window),button);
	
	
	
	gtk_widget_add_events(window, GDK_BUTTON_PRESS_MASK);
	//g_signal_connect(G_OBJECT(window), "button-press-event", G_CALLBACK(window_drag), NULL);
	//g_signal_connect(G_OBJECT(window), "button-press-event", G_CALLBACK(on_button_press), NULL);
	gtk_widget_set_uposition(GtkWindow *window,200,200);
	gtk_widget_show_all(window);
	gtk_main();
}


