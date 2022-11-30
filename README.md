# Libft (42Porto - 42Cursus) <img src="https://github.com/devicons/devicon/blob/master/icons/c/c-original.svg" title="C" alt="C Logo" width="55" height="55" align="right" />&nbsp;                       
## Grade: 125/100

###  Subject:
[Libft en_subject](https://github.com/Kuninoto/Libft/blob/master/extras/en.subject_libft.pdf)

### Installing and running the project:

1- Clone this repository
	
	git clone https://github.com/Kuninoto/Libft
2- Navigate to _lvl_0_libft_ and run `make`
	
	cd 42_Libft/lvl_0_libft
   	make
3- `make clean` so that you don't keep those object files that you won't need anymore

	make clean
4- Compile your main.c with your new _libft.a_

	cc -Wall -Wextra -Werror main.c libft.a

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
<img src="https://github.com/Kuninoto/Libft/blob/master/extras/war-machine.png" width="50%"/>

[libft-unit-test](https://github.com/alelievr/libft-unit-test)  
<img src="https://github.com/Kuninoto/Libft/blob/master/extras/unit-test_first-part.png" width="50%"/> 
<img src="https://github.com/Kuninoto/Libft/blob/master/extras/unit-test_second-part.png" width="50%"/>
<img src="https://github.com/Kuninoto/Libft/blob/master/extras/unit-test_bonus-part.png" width="50%"/>

## Disclaimer
> At [42School](https://en.wikipedia.org/wiki/42_(school)), almost every project must be written in accordance to the [Norm](.extras/en_norme.pdf)") (the schools' coding standard). As a result, the implementation of certain parts may appear strange and for sure had room for improvement.

---
Made by Nuno Carvalho (Kuninoto) | nnuno-ca@student.42porto.com  
<div id="badge"> <a href="https://www.linkedin.com/in/nuno-carvalho-218822247"/> <img src="https://img.shields.io/badge/LinkedIn-blue?style=for-the-badge&logo=linkedin&logoColor=white" alt="LinkedIn Badge"/>&nbsp;
