# What is GetNextLine(GNL)
The main reason we need this program is to read a file's line. Sucha case like
reading a data base data we have in a txt file, where the data is display line
by line.

## What is a static variable?
The value of this variable remains in the Data Segment(Memory Layout) so it can
get alterated through the program without being re-initialized each time is 
called in a function. 
(Something similar to pointers)

## What does read function do?
As the proper name points, it reads file's content. How? well this function
requires three parameters to commit its functionality, which are:
- File Descriptor(the file in number to read from)
- Output Buffer(all the content of the indicated file in bytes)
- Buffer Size(quantity of bytes you want to read)

## What malloc and free?
Both works with the dynamic memory allocation. Malloc places the data into the
heap(it returns you a pointer to the begining of the data) and free as the name
indicates, frees your data from the heap(given the pointer to that data).

## Process to develope get_next_line program

1. There are three arrays objects in the game. One will keep the line(ending 
at '\n' character), another aray 'array_2' will provide a keep-safer for the 
characters after the '\n' breaker. Finally, we have the buffer array, which 
will read a certain amount of bytes of the file.
```
char	*bff;
char	*line;
char	*aux;
```

### Q&A
> What happens if BUFFER_SIZE is less than the BUFFER_LINE_SIZE?
> What happens if BUFFER_SIZE is greater than the BUFFER_LINE_SIZE?
> What happens if BUFFER_SIZE is equal to the BUFFER_LINE_SIZE?
