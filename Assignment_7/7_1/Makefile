CC		= gcc
CFLAGS  = -Wall
OBJ     = linked_list.o use_linked_list.o
FILES   = linked_list.c use_linked_list.c
COMP    = use_linked_list

all: main

#for the corresponding source file, create object file
linked_list.o: linked_list.c
	$(CC) $(CFLAGS) -c linked_list.c

#same thing as above
use_linked_list.o: use_linked_list.c
	$(CC) $(CFLAGS) -c use_linked_list.c

#compiling linked_list.o and use_linked_list.o
compile_only: linked_list.o use_linked_list.o

#link linked_list.o and use_linked_list.o
link_only: linked_list.o use_linked_list.o
	$(CC) -o $(COMP) $(OBJ)

#create executable code from the files linked before(object files)
main: $(OBJ)
	$(CC) $(CFLAGS) -o $(COMP) $(OBJ)

# erasing the object files
delete_objects:
	rm -f *.o 

# erasing the exe files 
delete_exe:
	rm -f $(COMP)

# erasing both exe and obj
delete_all: delete_objects delete_exe