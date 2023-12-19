#include <gtk/gtk.h>

// Fungsi panggilan balik untuk menangani klik tombol
static void tombol_diklik(GtkWidget *widget, gpointer data) {
    g_print("Tombol Diklik\n");
}

int main(int argc, char *argv[]) {
    // Inisialisasi GTK
    gtk_init(&argc, &argv);

    // Membuat jendela utama
    GtkWidget *jendela = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(jendela), "Contoh GTK C++");
    gtk_window_set_default_size(GTK_WINDOW(jendela), 300, 200);
    g_signal_connect(jendela, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Membuat tombol
    GtkWidget *tombol = gtk_button_new_with_label("Klik Saya!");
    g_signal_connect(tombol, "clicked", G_CALLBACK(tombol_diklik), NULL);

    // Menyusun tombol ke dalam jendela
    GtkWidget *box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 10);
    gtk_container_add(GTK_CONTAINER(box), tombol);
    gtk_container_add(GTK_CONTAINER(jendela), box);

    // Menampilkan semua elemen
    gtk_widget_show_all(jendela);

    // Memulai lingkaran utama GTK
    gtk_main();

    return 0;
}
