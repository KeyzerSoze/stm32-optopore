// optopore.h

#ifndef OPTOPORE_H
#define OPTOPORE_H

// Function declarations for optical port driver

// Initializes the optical port
void optical_port_init(void);

// Reads data from the optical port
int optical_port_read(void);

// Writes data to the optical port
void optical_port_write(int data);

// Closes the optical port
void optical_port_close(void);

#endif // OPTOPORE_H
