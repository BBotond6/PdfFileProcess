// build: g++ -o PdfReader.exe main.cpp $(pkg-config --cflags --libs poppler-glib)

#include <iostream>

#include <poppler-document.h>
#include <poppler-page.h>

int main() {
    // Open a PDF document
    GError* error = nullptr;
    PopplerDocument* doc = poppler_document_new_from_file("file://<full_patch_of_the_pdf_file>", nullptr, &error);

    if (doc == nullptr) {
        std::cerr << "Error opening the PDF: " << error->message << std::endl;
        g_error_free(error);
        return 1;
    }

    const int numPages = poppler_document_get_n_pages(doc);
    std::cout << "Number of pages: " << numPages << std::endl;

    for (int i = 0; i < numPages; ++i) {
        PopplerPage* page = poppler_document_get_page(doc, i);
        gchar* text = poppler_page_get_text(page);
        std::string textStr(text);
        g_free(text);

        std::cout << "Page " << i << ":\n" << textStr << std::endl;

        g_object_unref(page);
    }

    g_object_unref(doc);

    return 0;
}
