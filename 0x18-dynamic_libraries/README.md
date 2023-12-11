<H1 align="center", height="1500"> <ins> README.md File </ins> </H1>
<H1 align="center", height="1500"> <ins> 0x18. C - Dynamic libraries </ins> </H1>

<p align="center">
  <img src="https://i.ibb.co/BLrpTFn/0x18-C-Dynamic-libraries-ALX-Logo.png" />
</p>

##

* **File_name:** <ins>**README.md file**</ins>
* **Created:** <ins>**On December 7, 2023**</ins>
* **Author:** <ins>***Bereket Dereje Mekkonen***</ins>
* **Project:** [**0x18. C - Dynamic libraries**](https://intranet.alxswe.com/projects/242)
* **GitHub repository:** [**alx-low_level_programming**](https://github.com/BekiHabesha/alx-low_level_programming)
* **Directory:** [**0x18-dynamic_libraries**](https://github.com/BekiHabesha/alx-low_level_programming/tree/main/0x18-dynamic_libraries)
* **Project Tasks:** <ins>**Mandatory and Advanced**</ins>
* **Tasks in number:** <ins>**4 Tasks (2-Mandatory & 2-Advanced)**</ins>
* **Mandatory_Tasks:** <ins>**From Task 0 to 1**</ins>
* **Advanced_Tasks:** <ins>**From Task 2 to 3**</ins>

## 

<p align="center">
  <img src="https://miro.medium.com/v2/resize:fit:537/1*QI-LJC2bVLwDMT9VTpnjtg.png" />
  <img src="https://miro.medium.com/v2/resize:fit:1400/0*kBv1t60yNKsDeLJ_.png" />
</p>

##

## <ins>**PROJECT_TITLE</ins>:** :floppy_disk:   [**0x18. C - Dynamic libraries**](https://intranet.alxswe.com/projects/242)

## <ins>**GITHUB_REPOSITORY</ins>: 📂**    [**alx-low_level_programming**](https://github.com/BekiHabesha/alx-low_level_programming)

## <ins>**DIRECTORY</ins>: 📂**  [**0x18-dynamic_libraries**](https://github.com/BekiHabesha/alx-low_level_programming/tree/main/0x18-dynamic_libraries)

### 

<p align="center">
<img src="https://miro.medium.com/v2/resize:fit:1400/1*2fOv3QdTmnRvq8hAYcE0jA.jpeg" />
</p>

<h1> <ins>Resources</ins> :floppy_disk:</H1>

### **Read or watch:** :heavy_check_mark:
* [**What is difference between Dynamic and Static library (Static and Dynamic linking)**](https://intranet.alxswe.com/rltoken/XLLmLISlteUIxrLzNdm3_Q)
* [**create dynamic libraries on Linux**](https://intranet.alxswe.com/rltoken/JEqzgE_pPe48rvbspGL-2g)

<p align="center">
  <img src="https://calmops.com/images/static-and-dynamic-lib.png" />
  <img src="https://media.licdn.com/dms/image/C5612AQHR_86Vzz0GiQ/article-cover_image-shrink_600_2000/0/1620095102374?e=2147483647&v=beta&t=ebPs4GiUxoSQWmUj7XyCdBvjo96lXBBRYTxM7vVao6s" />
</p>

###

<H1><ins>Learning Objectives</ins>:floppy_disk:</H1>

* At the end of this project, You are expected to be able to [**explain to anyone**](https://intranet.alxswe.com/rltoken/wZXKCWgm5hGCD0ZKtZAOrQ), **Without the help of Google:**

<p align="center">
  <img src="https://i.ibb.co/hgMbTgW/final-the-feynman-technique.png" />
</p>

###

<H2> <ins>General Learning Objectives</ins> :heavy_check_mark:</H2>

* **What is a <ins>dynamic library</ins>, how does <ins>it work</ins>, how to <ins>create one</ins>, and how to <ins>use it</ins>.**
* What is the **<ins>environment variable</ins> $LD_LIBRARY_PATH** and how to **<ins>use it</ins>.**
* **What are the <ins>differences</ins> between <ins>static</ins> and <ins>shared libraries</ins>.**
* **Basic usage <ins>nm</ins>, <ins>ldd</ins>, <ins>ldconfig</ins>.**

<p align="center">
  <img src="https://linuxopsys.com/wp-content/uploads/2022/12/print-libraries-12-2022-2.png" />
</p>

###

<H2> <ins>Copyright - Plagiarism</ins> :heavy_check_mark:</H2>

<p align="center">
  <img src="https://i.ibb.co/Dr7zQyb/alx-do-hard-things.png" />
</p>

* You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
* You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
* You are not allowed to publish any content of this project.
* Any form of plagiarism is strictly forbidden and will result in removal from the program.

##

<H1><ins>Requirements</ins> :floppy_disk:</H1>

<p align="center">
  <img src="https://i.ibb.co/F3yxSVj/alx-do-better-edited.png" />
</p>

<H2>C :heavy_check_mark:</H2>

* Allowed editors: <ins>**vi**</ins>, <ins>**vim**</ins>, <ins>**emacs**</ins>.
* All your files will be **interpreted/compiled** on <ins>**Ubuntu 20.04 LTS**</ins> Using <ins>**gcc**</ins>, Using the options <ins>**-Wall -Werror -Wextra -pedantic -std=gnu89**</ins>
* All your files should **end with a new line**
* A [**README.md**](./README.md) <ins>**file**</ins>, at the root of the folder 📂 of the project is mandatory.
* **Your code should use the <ins>Betty style**</ins>. It will be checked using [**betty-style.pl**](https://github.com/alx-tools/Betty/blob/master/betty-style.pl), and [**betty-doc.pl**](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl).
* You are **not allowed to use <ins>global variables**</ins>
* **No more** than <ins>**5 functions**</ins> per **file.**
* You are **not allowed to use the <ins>standard library**</ins> Any **use of functions like <ins>printf</ins>, <ins>puts</ins>, etc… is forbidden.**
* You are **<ins>not allowed to use**</ins> [**_putchar**](https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c)
* You **<ins>don’t have to push</ins> _putchar.c,** we will use our file. If you do it won’t be taken into account.
* You are **not allowed to use <ins>global variables**</ins>
* In the following examples, <ins>**the main.c files</ins>** are shown as examples. You can use them to <ins>**test your functions</ins>, but you don’t have to push them to your repo** (if you do we won’t take them into account). We will **use our <ins>own main.c files</ins> at compilation**. <ins>**Our main.c files**</ins> might be different from the one shown in the examples.
* The <ins>**prototypes</ins> of all <ins>your functions**</ins> and the <ins>**prototypes</ins> of the <ins>function**</ins> [**_putchar**](https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c) should be included in your [**header file**](./main.h) called [**main.h**](./main.h)
* **<ins>Don’t forget to push</ins> your** [**header file**](./main.h) .

<p align="center">
  <img src="https://miro.medium.com/v2/resize:fit:1400/1*jUtt-O9VFHduvJsRSrYCmQ.png" />
  <img src="https://scienceprog.com/wp-content/uploads/2021/01/image-69.png" />
</p>

##

<H2>Bash :heavy_check_mark:</H2>

* Allowed editors: <ins>**vi**</ins>, <ins>**vim**</ins>, <ins>**emacs**</ins>.
* All your scripts will be **tested** on <ins>**Ubuntu 20.04 LTS**</ins>
* All your files should **end with a new line** ([**why?**](http://unix.stackexchange.com/questions/18743/whats-the-point-in-adding-a-new-line-to-the-end-of-a-file/18789))
* The first line of all your files should be exactly <ins>**#!/usr/bin/python3**</ins>
* A [**README.md**](./README.md) <ins>**file**</ins>, at the root of the folder 📂 of the project, describing what each script is doing.


<p align="center">
  <img src="https://journaldev.nyc3.cdn.digitaloceanspaces.com/2020/01/Top_50_Linux_Commands-1.png" />
  <img src="https://scienceprog.com/wp-content/uploads/2021/01/image-69.png" />
</p>

##

## <ins>**PROJECT_TITLE</ins>:** :floppy_disk:   [**0x18. C - Dynamic libraries**](https://intranet.alxswe.com/projects/242)

## <ins>**GITHUB_REPOSITORY</ins>: 📂**    [**alx-low_level_programming**](https://github.com/BekiHabesha/alx-low_level_programming)

## <ins>**DIRECTORY</ins>: 📂**  [**0x18-dynamic_libraries**](https://github.com/BekiHabesha/alx-low_level_programming/tree/main/0x18-dynamic_libraries)

###

<p align="center">
  <img src="https://i.ibb.co/y5wmQyd/Alx-enginn-Build-ur-future.png" />
</p>

<H1 align="center"> <ins> PROJECT TASKS (Mandatory and Advanced)</ins>:floppy_disk:</H1>

<H1 align="center">MANDATORY_TASKS (From Task 0 to 1) :cd:</h1>

## **No. 0. A library is not a luxury but one of the necessities of life** :heavy_check_mark:
* **File:**
  * [**libdynamic.so**](./libdynamic.so)
###
* Create the **dynamic library <ins>libdynamic.so</ins>** containing all the **<ins>functions listed below</ins>:**

```js
      **int _putchar(char c);**
      **int _islower(int c);**
      **int _isalpha(int c);**
      **int _abs(int n);**
      **int _isupper(int c);**
      **int _isdigit(int c);**
      **int _strlen(char *s);**
      **void _puts(char *s);**
      **char *_strcpy(char *dest, char *src);**
      **int _atoi(char *s);**
      **char *_strcat(char *dest, char *src);**
      **char *_strncat(char *dest, char *src, int n);**
      **char *_strncpy(char *dest, char *src, int n);**
      **int _strcmp(char *s1, char *s2);**
      **char *_memset(char *s, char b, unsigned int n);**
      **char *_memcpy(char *dest, char *src, unsigned int n);**
      **char *_strchr(char *s, char c);**
      **unsigned int _strspn(char *s, char *accept);**
      **char *_strpbrk(char *s, char *accept);**
      **char *_strstr(char *haystack, char *needle);**
```

* If you haven’t coded all of the above functions create empty ones, with the right prototype. Don’t forget to push your main.h file in your repository, containing at least all the prototypes of the above functions.<br>

<p align="center">
  <img src="https://i.ibb.co/4wkLDqm/0-nm-0x18-C-Dynamic-libraries.png" />
  <img src="https://i.ibb.co/X7HS7YH/0-main-0x18-C-Dynamic-libraries.png" />
</p>

##

## **No. 1. Without libraries what have we? We have no past and no future** :heavy_check_mark:
* **File:**
  * [**1-create_dynamic_lib.sh**](./1-create_dynamic_lib.sh)
###
* Create a **script that creates a dynamic library called <ins>liball.so**</ins> from all the **<ins>.c**</ins> files that are in the current directory.<br>

<p align="center">
  <img src="https://i.ibb.co/t86LLjF/1-c-0x18-C-Dynamic-libraries.png" />
  <img src="https://i.ibb.co/zr4DhJq/1-main-0x18-C-Dynamic-libraries.png" />
</p>

#

<h1 align="center"> ADVANCED_TASKS (From Task 2 to 3)</h1>

## **No. 2. Let's call C functions from Python** :heavy_check_mark:
* **File:**
  * [**100-operations.so**](./100-operations.so)
###
* Create a **dynamic library that contains <ins>C functions**</ins> that can be called from **<ins>Python</ins>.** See example for more detail.<br>

<p align="center">
  <img src="https://i.ibb.co/7WPywNY/2-main-0x18-C-Dynamic-libraries.png" />
  <img src="https://i.ibb.co/xFV83Ks/2-mr0x18-C-Dynamic-libraries.png" />
</p>

##

## **No. 3. Code injection: Win the Giga Millions!** :heavy_check_mark:
* **File:**
  * [**101-make_me_win.sh**](./101-make_me_win.sh)
<br>
<p align="center">
  <img src="http://4.bp.blogspot.com/-9rqm8Pg1apY/UZHoC79xXtI/AAAAAAAACOs/0Fp4A4ipUqM/s320/tumblr_mlzp3qgHss1s5xo13o3_r1_1280.jpg" />
</p>
###
* **I bought a ticket for the Giga Millions and chose these numbers: 9, 8, 10, 24, 75 + 9. If you could run two commands on the same server where the Giga Millions program runs, could you make me win the Jackpot?**
  * Our mole got us a copy of the program, you can download it [**here**](https://github.com/alx-tools/0x18.c). Our mole also gave us a piece of documentation:

```js
      /* **Giga Millions program**                                                                                    
        * **Players may pick six numbers from two separate pools of numbers:**                                                
        * **- five different numbers from 1 to 75 and**                                                                       
        * **- one number from 1 to 15**                                                                                       
        * **You win the jackpot by matching all six winning numbers in a drawing.**                                           
        * **Your chances to win the jackpot is 1 in 258,890,850**                                                           
        *                                                                                                                 
        * **usage: ./gm n1 n2 n3 n4 n5 bonus**
```

* You can’t modify the program **<ins>gm**</ins> itself as Master Sysadmin Sylvain (MSS) always checks its [**MD5**](https://intranet.alxswe.com/rltoken/uFp7pQzfyzDA7z2cVOKIaQ) before running it
* The system is an **<ins>Linux Ubuntu 16.04**</ins>
* The server has internet access
* Our mole will be only able to run two commands from a shell script, without being detected by MSS
* Your shell script should be maximum 3 lines long. You are not allowed to use **<ins>;**</ins>, **<ins>&&**</ins>, **<ins>||**</ins>, **<ins>|**<ins>, `(it would be detected by MSS), and have a maximum of two commands
* Our mole has only the authorization to upload one file on the server. It will be your shell script
* Our mole will run your shell script this way: **<ins>mss@gm_server$ . ./101-make_me_win.sh**</ins>
* Our mole will run your shell script from the same directory containing the program **<ins>gm**</ins>, exactly 98 seconds before MSS runs **<ins>gm**</ins> with my numbers: **<ins>./gm 9 8 10 24 75 9**</ins>
* MSS will use the same terminal and session than our mole
* Before running the **<ins>gm**</ins> program, MSS always check the content of the directory
* MSS always exit after running the program **<ins>gm**</ins>
* TL;DR; This is what is going to happen

```js
      mss@gm_server$ . ./101-make_me_win.sh
      mss@gm_server$ rm 101-make_me_win.sh
      mss@gm_server$ ls -la
      . .. gm
      mss@gm_server$ history -c
      mss@gm_server$ clear
      mss@gm_server$ ls -la
      . .. gm
      mss@gm_server$ md5sum gm
      d52e6c18e0723f5b025a75dea19ef365  gm
      mss@gm_server$ ./gm 9 8 10 24 75 9
      --> Please make me win!
      mss@gm_server$ exit
```

<ins>**Tip</ins>:** **LD_PRELOAD**

##
