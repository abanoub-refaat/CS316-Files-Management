#include <fstream>
#include <iostream>
#include <unistd.h>


/*
     Task 1
          -Create a text file with the following content
               4test 5name1 2id
          -Read The file content and display the fields
               i.e: test name1 id
     Task 1 (continue)
          -Take fields from user and write it with the same format in the text file field_length field
          (take inputs from user , instead of write at a file , and test on string length > 12)

     Task Bonus
          -index in another file (see page 152 in our Files Reference)
 */
using namespace std;
int main()
{
     fstream file;
     file.open("Task_4.txt", ios::in);
     file.close();

     return 0;
}