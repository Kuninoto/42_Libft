# Libft (42Porto - 42Cursus)                        
## Grade: ?/100

###  Subject:
[Libft En_Subject](https://github.com/Kuninoto/Libft/blob/master/extras/en.subject_libft.pdf)

### Installing and running the project:

1- Clone this repository
	
	git clone https://github.com/Kuninoto/Libft
2- `cd` into `lvl_0_libft` and run `make`
	
	cd Libft/lvl_0_libft
   	make
3- Compile your main.c with your new `libft.a`

	gcc -Wall -Wextra -Werror main.c libft.a

#### Makefile Available Targets:  
`make` or `make all - Makes libft.a 
`make bonus` - Makes libft.a with bonus functions (see [Subject](https://github.com/Kuninoto/Libft/blob/master/extras/en.subject_libft.pdf))  
`make clean` - Deletes all the resulting object files (they are already inside our _libft.a_, run `ar -t libft.a` to see them all)  
`make fclean` - Deletes libft.a and all the resulting object files  
`make re` - Does exactly the same as fclean xD  

###  Tests:
<img align="right" src="(https://github.com/Kuninoto/Libft/blob/master/extras/Tests)" width="50%"/>

[libft-unit-test](https://github.com/alelievr/libft-unit-test)  
[Libftest](https://github.com/jtoty/Libftest)  
[libft-war-machine](https://github.com/y3ll0w42/libft-war-machine)  
