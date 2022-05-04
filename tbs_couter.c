#include <stdio.h>

int main() {
    int chr, n_blank, n_tabs, n_newlines;
    chr = n_blank = n_tabs = n_newlines = 0;

    while ((chr = getchar()) != EOF) {
        n_blank += (chr == ' ');
        n_tabs += (chr == '\t');
        n_newlines += (chr == '\n');
    }

    printf("Blank: %d\n", n_blank);
    printf("Tabs: %d\n", n_tabs);
    printf("Newlines: %d\n", n_newlines);
}
