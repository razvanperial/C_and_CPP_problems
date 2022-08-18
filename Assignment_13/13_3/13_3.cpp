/*
CH-230-A
a13 p3.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <iostream>
#include <fstream>

int main() {
    //declare the files
    std::ifstream in_file;  
    std::ofstream out_file;

    //open the output file
    out_file.open("concatn.txt", std::ios::binary);
    if (!out_file){   
            std::cout <<"Error! Could not open file\n"; 
            exit(-1);
    }

    std::string s;//will store the names of the files

    int n;
    std::cin >> n;//read the number of files

    while(n--) {
        std::cin >> s;
        in_file.open(s, std::ios::binary);
        //check if the file has been opened 
        if (!in_file){   
            std::cout <<"Error! Could not open file\n"; 
            exit(-1);
        }

        // get length of file:
        in_file.seekg (0, std::ios::end);
        int length = in_file.tellg();
        in_file.seekg (0, std::ios::beg);

        //allocate memory for the buffer of the size of the file
        char* buffer = new char[length];
        //char buffer[length];

        //read content from file as a block
        in_file.read(buffer, length);
            
        //write content of file in out_file as a block
        out_file.write(buffer, length);

        if(n > 0)//don't write an extra newline at the end of the output file
            out_file << std::endl;
            
        //close the file
        in_file.close();

        //deallocate the memory used by the buffer
        delete [] buffer;
    }

    //close the output file
    out_file.close();
    return 0;
}