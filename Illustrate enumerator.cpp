#include <stdio.h>
#include <conio.h>

enum year { Jan, Feb, Mar, Apr, May, June, July, Aug, Sep, Oct, Nov, Dec };

int main() {
    int i;
    
    // Array of month names
    const char* month_names[] = {"January", "February", "March", "April", "May", "June", 
                                 "July", "August", "September", "October", "November", "December"};
    
    // Loop through the enum and print corresponding month names
    for(i = Jan; i <= Dec; i++) {
        printf("%s ", month_names[i]);
    }
    
    return 0;
}
