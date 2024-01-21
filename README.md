# PDF File Processing

The PdfReader example script serves as a practical illustration for developers looking to read and analyze PDF files using C++ and the Poppler library.
Crafted with simplicity in mind, the script extracts text content from a specified PDF, offering a clear example of how to integrate and utilize the
capabilities of the Poppler library in a C++ environment.

## Features

- Demonstrates the integration of the Poppler library for PDF document processing.
- Displays the total number of pages in the specified PDF.
- Outputs the text content of each page, showcasing a fundamental PDF parsing example.

## Usage

- Build the executable:

```g++ -o PdfReader.exe main.cpp $(pkg-config --cflags --libs poppler-glib)```
- Modify the code to specify the full path of your target PDF file:

```"file:///path/to/your_pdf_file.pdf"```
- Run the executable:

```./PdfReader.exe```

Ensure that the modified script points to the correct full path of your PDF file.
This example script serves as a valuable resource for developers seeking a starting point to integrate PDF reading capabilities into their C++ applications using the Poppler library.
