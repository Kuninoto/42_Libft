# Libft (42Porto - 42Cursus)  

## Grade: 125/100

### Description

A static C library containing utility functions and reimplementations of common [libc](https://www.gnu.org/software/libc/) functions. This library is a jumpstart the 42 school course and
is used throughout it.  

### Installing and running the project:

1- Clone this repository
	
	git clone https://github.com/Kuninoto/42_Libft
2- Run `make`

   	make
3- Run `make clean` so that you don't keep the object files that you won't need anymore

	make clean
4- Compile your project (e.g. `main.c`) with your new `libft.a`

	cc -Wall -Wextra -Werror main.c libft.a

#### Makefile Available Targets:  

`make` or `make all` - Makes `libft.a`  
`make bonus` - Makes `libft.a` with bonus functions (not mandatory as part of the mandatory part of the project)  
`make clean` - Deletes all the resulting object files  
`make fclean` - Deletes `libft.a` and all the resulting object files  
`make re` - Deletes everything (object files and `libft.a`) and rebuilds `libft.a`  

#### Adding new functions to this library:

  - Add their prototypes to `libft.h`  
  - Add their source files to this repository  
  - Add their source file names to `LIB_SRCS` variable on the Makefile  

##### To keep track of what's inside your resulting `libft.a` run `ar -t libft.a`   

###  Tests: 

[libft-war-machine](https://github.com/y3ll0w42/libft-war-machine)  
<img src="https://github.com/Kuninoto/Libft/blob/master/extras/war-machine.png" width="50%"/>

[libft-unit-test](https://github.com/alelievr/libft-unit-test)  
<img src="https://github.com/Kuninoto/Libft/blob/master/extras/unit-test_first-part.png" width="50%"/> 
<img src="https://github.com/Kuninoto/Libft/blob/master/extras/unit-test_second-part.png" width="50%"/>
<img src="https://github.com/Kuninoto/Libft/blob/master/extras/unit-test_bonus-part.png" width="50%"/>

## Disclaimer

> At [42 School](https://en.wikipedia.org/wiki/42_(school)), almost every project must be written in accordance to the "Norm", the schools' coding standard. As a result, the implementation of certain parts may appear strange and for sure had room for improvement.

---
Made by Nuno Carvalho (Kuninoto) | nnuno-ca@student.42porto.com  
<div id="badge"> <a href="https://www.linkedin.com/in/nuno-carvalho-218822247"/> <img src="https://img.shields.io/badge/LinkedIn-blue?style=for-the-badge&logo=linkedin&logoColor=white" alt="LinkedIn Badge"/>&nbsp;
