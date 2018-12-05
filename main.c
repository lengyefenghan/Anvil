//server.c
#include <gtk/gtk.h>
void button_deal(GtkWidget *widget,gpointer *data){
	g_print("Button event:%s\n",data);


}


void main(int argc,char *argv[]){

	gtk_init(&argc,&argv);
	
	GtkWidget *window ;
	GtkWidget *button ;

	
	
	
	
	
	window = gtk_window_new(GTK_WINDOW_POPUP);
	//创建一个弹出式窗口
	
	gtk_window_set_decorated(GTK_WINDOW (window), FALSE);
	//设置无边框
	//gtk_window_set_opacity(GTK_WINDOW(window),0.5);
	//设置窗口透明度
	gtk_widget_add_events(window, GDK_BUTTON_PRESS_MASK);
	gtk_window_set_keep_above((GtkWindow *) window,TRUE);
	gtk_widget_set_size_request(window,50,50);
	//设置窗口大小
	gtk_window_set_resizable(GTK_WINDOW(window),FALSE);
	//设置窗口大小固定
	//gtk_window_set_default_size(GTK_BUTTON(button),50,50);
	button = gtk_button_new_with_label("hello");
	//设置按钮字体

	gtk_container_add(GTK_CONTAINER(window),button);
	//将按钮放置在窗口容器里
	/*开始注册各种函数 注册方法：g_signal_connect()*/
	g_signal_connect(GTK_OBJECT(button),"clicked",GTK_SIGNAL_FUNC(button_deal),"杨坤");
	
	gtk_widget_add_events(window, GDK_BUTTON_PRESS_MASK);
	//gtk_widget_set_uposition(GTK_WINDOW(window),200,200);
	gtk_widget_set_uposition(window,200,200);
	//设置窗口启动位置
	gtk_widget_show_all(window);
	gtk_main();
	
}


