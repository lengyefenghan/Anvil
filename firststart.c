//firstset.c
#include<gtk/gtk.h>


int main(int argc,char *argv[]){
//	GtkWidget *window;
//	GtkWidget *label;
	
	gtk_init (&argc,&argv);
	//初始化窗口
	/* if(first){
	} */
	GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	//创建一个窗口并返回这个窗口的控件指针
	GtkWidget *button = gtk_button_new_with_label("First Setting");
	gtk_container_add(GTK_CONTAINER(window),button);
	//or 
	//gtk_container_add(GTK_CONTAINER(window),btton);
	gtk_widget_show(button);
	gtk_widget_show(window);
	//显示上一步创建的窗口部件
	//gtk_widget_show_all(windows);
	//显示window所有控件
	gtk_main();
	//等待事件的发生
	return 0;
	
}
