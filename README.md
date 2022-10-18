# Libft (42Porto - 42Cursus) <img src="https://github.com/devicons/devicon/blob/master/icons/c/c-original.svg" title="C" alt="C Logo" width="40" height="50" align="right" />&nbsp;                       
## Grade: ?/100

###  Subject:
[Libft En_Subject](https://github.com/Kuninoto/Libft/blob/master/extras/en.subject_libft.pdf)

### Installing and running the project:

1- Clone this repository
	
	git clone https://github.com/Kuninoto/Libft
2- Navigate to _lvl_0_libft_ and run `make`
	
	cd Libft/lvl_0_libft
   	make
3- `make clean` so that you don't keep those object files that you won't need anymore

	make clean
4- Compile your main.c with your new _libft.a_

	gcc -Wall -Wextra -Werror main.c libft.a

#### Makefile Available Targets:  
`make` or `make all` - Makes _libft.a_  
`make bonus` - Makes _libft.a_ with bonus functions (see [Subject](https://github.com/Kuninoto/Libft/blob/master/extras/en.subject_libft.pdf))  
`make clean` - Deletes all the resulting object files  
`make fclean` - Deletes _libft.a_ and all the resulting object files  
`make re` - Deletes everything (object files and _libft.a_) and rebuilds _libft.a_
#### Adding new functions to this library:
  - Add their prototypes to _libft.h_
  - Add their source files to _lvl_0_libft_
  - Add their source file names to "LIB_SRCS" variable inside the Makefile   
##### To keep track of what's inside your resulting _libft.a_ run `ar -t libft.a`   

###  Tests: 
[libft-war-machine](https://github.com/y3ll0w42/libft-war-machine)  
  
<img src="https://github.com/Kuninoto/Libft/blob/master/extras/Tests.png" width="50%"/>

---
Made by Kuninoto: nnuno-ca@student.42porto.com | LinkedIn: [Nuno Carvalho](https://www.linkedin.com/in/nuno-carvalho-218822247)
