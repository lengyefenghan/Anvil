//server.c
#include <gtk/gtk.h>

void main(int argc,char *argv[]){

	gtk_init(&argc,&argv);
	
	GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_opacity(GTK_WINDOW(window),0.5);

	gtk_window_set_keep_above((GtkWindow *) window,TRUE);
	gtk_widget_set_size_request(window,150,200);
	//gtk_window_set_resizable(GTK_WINDOW(window),FALSE);
	gtk_widget_show_all(window);
	gtk_main();
}

