<H1 align="center", height="1500"> <ins> README.md File </ins> </H1>
<H1 align="center", height="1500"> <ins>0x1A. C - Hash tables</ins> </H1>

![BekaHabesha.]( https://i.ibb.co/wWRrMhz/0x1-A-C-Hash-tables-Alx-logo.png)

##

* **File_name:** <ins>**README.md file**</ins>
* **Created:** <ins>**On December 22, 2023**</ins>
* **Author:** <ins>***Bereket Dereje Mekkonen***</ins>
* **Project:** [**0x1A. C - Hash tables**](https://intranet.alxswe.com/projects/253#task-1253)
* **GitHub repository:** 📂 [**alx-low_level_programming**](https://github.com/BekiHabesha/alx-low_level_programming/tree/master)
* **Directory:** 📂 [**0x1A-hash_tables**](https://github.com/BekiHabesha/alx-low_level_programming/tree/master/0x1A-hash_tables)
* **Project Tasks:** <ins>**Mandatory and Advanced**</ins>
* **Tasks in number:** <ins>**8 Tasks (7-Mandatory & 1-Advanced)**</ins>
* **Mandatory_Tasks:** <ins>**From Task 0 to 6**</ins>
* **Advanced_Tasks:** <ins>**Task 7**</ins>

##

### **PROJECT_TITLE:** [**0x1A. C - Hash tables**](https://intranet.alxswe.com/projects/253#task-1253)

### **GITHUB_REPOSITORY:** 📂 [**alx-low_level_programming**](https://github.com/BekiHabesha/alx-low_level_programming/tree/master)

### **DIRECTORY:**  📂 [**0x1A-hash_tables**](https://github.com/BekiHabesha/alx-low_level_programming/tree/master/0x1A-hash_tables)

##

![C_programming_logo.]( https://img-c.udemycdn.com/course/750x422/700012_a499_9.jpg)

<h1> <ins>Header File</ins>:cd:</H1>

* [hash_tables.h](./hash_tables.h): is the **<ins>Header file containing definitions and prototypes**</ins> for **all types and functions written for the project.**

<h2> <ins>Data Structures:</ins>:heavy_check_mark:</H2>

```js
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
```

<H1> <ins>Function Prototypes:</ins> :floppy_disk:</H1>

| <H3 align="center">Task NO.</H3> | <H3 align="center">Title</H3> | <H3 align="center">File</H3> | <H3 align="center">Prototype</H3> |
| :----: | :----:| :---- | :---- |
|   |   |   |   |
|   |   |   |   |
|   | **MANDATORY TASKS** |  |  |
|   |   |   |   |
|   |   |   |  |
| **0** | **>>> ht = {}** | [**0-hash_table_create.c**](./0-hash_table_create.c) | [**hash_table_t *hash_table_create(unsigned long int size);**](./0-hash_table_create.c) |
| **1** | **djb2** | [**1-djb2.c**](./1-djb2.c) | [**def safe_print_integer(value):**](./1-djb2.c) |
| **2** | **key -> index** | [**2-key_index.c**](./2-key_index.c) | [**unsigned long int key_index(const unsigned char *key, unsigned long int size);**](./2-key_index.c) |
| **3** | **>>> ht['betty'] = 'cool'** | [**3-hash_table_set.c**](./3-hash_table_set.c) | [**int hash_table_set(hash_table_t *ht, const char *key, const char *value);**](./3-hash_table_set.c) |
| **4** | **>>> ht['betty']** | [**4-hash_table_get.c**](./4-hash_table_get.c) | [**char *hash_table_get(const hash_table_t *ht, const char *key);**](./4-hash_table_get.c) |
| **5** | **>>> print(ht)** | [**5-hash_table_print.c**](./5-hash_table_print.c) | [**void hash_table_print(const hash_table_t *ht);**](./5-hash_table_print.c) |
| **6** | **>>> del ht** | [**6-hash_table_delete.c**](./6-hash_table_delete.c) | [**void hash_table_delete(hash_table_t *ht);**](./6-hash_table_delete.c) |
|   |   |   |   |
|  |   |   |  |
|  | **ADVANCED TASKS** |  |  |
|  |   |   |  |
|  |   |   |  |
| **7** | **$ht['Betty'] = 'Cool'** | [**100-sorted_hash_table.c**](./100-sorted_hash_table.c) | [**shash_table_t *shash_table_create(unsigned long int size);**](./100-sorted_hash_table.c) |
|   |   |   | [**int shash_table_set(shash_table_t *ht, const char *key, const char *value);**](./100-sorted_hash_table.c) |
|   |   |   | [**char *shash_table_get(const shash_table_t *ht, const char *key);**](./100-sorted_hash_table.c) |
|   |   |   | [**void shash_table_print(const shash_table_t *ht);**](./100-sorted_hash_table.c) |
|   |   |   | [**void shash_table_print_rev(const shash_table_t *ht);**](./100-sorted_hash_table.c) |
|   |   |   | [**void shash_table_delete(shash_table_t *ht);**](./100-sorted_hash_table.c) |
|   |   |   |   |
|   |   |   |   |

##

![C_programming_logo.]( https://media.licdn.com/dms/image/D4D12AQGvWHFDSOhMCg/article-cover_image-shrink_600_2000/0/1679804058550?e=2147483647&v=beta&t=79sIbe7ddYz70rldXsyxVdBUfAn--qK6yeMmRY77ZQY)

<h1> <ins>Resources</ins>:floppy_disk:</H1>

### **Read or watch:**:heavy_check_mark:
* [What is a HashTable Data Structure - Introduction to Hash Tables , Part 0](https://intranet.alxswe.com/rltoken/IQVfdxJlS6jhAgcuUoCseg)
* [Hash function](https://intranet.alxswe.com/rltoken/ZKpRI_FxOxAz80Onpfy0Ew)
* [Hash table](https://intranet.alxswe.com/rltoken/mxjKpEfAw3E5B8S3inPuHQ)
* [All about hash tables](https://intranet.alxswe.com/rltoken/3RwwAqmpGJpMiBa7BE9fAQ)
* [why hash tables and not arrays](https://intranet.alxswe.com/rltoken/OgO7uga3PIaCTMtTzYCY3g)

![My alx. ]( https://img.freepik.com/premium-photo/abstract-modern-tech-programming-code-screen-developer-c-programming-language-computer-script-technology-background-software_505353-127.jpg?w=996)

###

<H1 align="center"><ins>Learning Objectives</ins>:floppy_disk:</H1>

* At the end of this project, You are expected to be able to [explain to anyone](https://intranet.alxswe.com/rltoken/fLjDjjaCL1oE-WJcDPpmFg), **Without the help of Google:**

![C_programming_logo.]( https://kennardconsole.files.wordpress.com/2018/03/c_programming_language.png)

#

<H2> <ins>General Learning Objectives</ins>:heavy_check_mark:</H2>

* What is a <ins>**hash function</ins>.**
* What makes a <ins>**good hash function</ins>.**
* What is a <ins>**hash table</ins>,** how do <ins>**they work</ins>** and how to <ins>**use them</ins>.**
* What is a <ins>**collision</ins>** and what are the <ins>**main ways</ins>** of dealing with  <ins>**collisions</ins>** in the context of a <ins>**hash table</ins>.**
* What are the <ins>**advantages</ins>** and <ins>**drawbacks</ins>** of using ins>**hash tables</ins>.**
* What are the **most common <ins>use cases</ins>** of <ins>**hash tables</ins>.**

![C_script_logo.]( https://img.freepik.com/premium-photo/abstract-modern-tech-programming-code-screen-developer-c-programming-language-computer-script-technology-background-software_505353-434.jpg?w=996)

###
<H2> <ins>Copyright - Plagiarism</ins>:heavy_check_mark:</H2>

* You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
* You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
* You are not allowed to publish any content of this project.
* Any form of plagiarism is strictly forbidden and will result in removal from the program.

![C_script_logo.]( https://blog.qwasar.io/hs-fs/hubfs/howtobecomeasoftwareengineer.jpg?width=1944&name=howtobecomeasoftwareengineer.jpg)

##

<H1 align="center"> <ins>Requirements</ins>:floppy_disk:</H1>

<H2><ins>General</ins> :heavy_check_mark:</H2>

* Allowed editors: <ins>**vi**</ins>, <ins>**vim**</ins>, <ins>**emacs**</ins>.
* All your files will be **compiled** on <ins>**Ubuntu 20.04 LTS**</ins> Using <ins>**gcc**</ins> Using the options <ins>**-Wall -Werror -Wextra -pedantic -std=gnu89**</ins>
* All your files should **end with a new line**
* A <ins>**README.md file**</ins>, at the root of the folder of the project is mandatory.
* Your code should use the <ins>**Betty style</ins>.** It will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl) 
* You are **not allowed to <ins>use global variables</ins>.**
* No **more than <ins>5 functions per file</ins>.**
* You are **allowed to <ins>use the C standard library</ins>.**
* The <ins>**prototypes</ins>** of all your <ins>**functions </ins>** should be included in your <ins>**header file</ins>** called **hash_tables.h**
* Don’t forget to <ins>**push your header file</ins>**
* All your <ins>**header files</ins>** should be <ins>**include guarded</ins>**

![C_programming_logo.]( https://blog.stoneriverelearning.com/wp-content/uploads/2016/08/CBlog.png)

##

<H1> <ins>More Info</ins>:floppy_disk:</H1>

<H2><ins>Data Structures</ins> :heavy_check_mark:</H2>

* **Please use these data structures for this project:**

```js
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
```

##

<H2><ins>Tests</ins> :heavy_check_mark:</H2>

We strongly encourage you to work all together on a set of tests

##

![Python_Dictionaries]( https://favtutor.com/resources/images/uploads/mceu_93797887411635500429275.png)

<H1> <ins>Python Dictionaries</ins>:floppy_disk:</H1>

<ins>**Python dictionaries</ins>** are implemented using <ins>**hash tables</ins>**. **When you will be done with this project, you will be able to better understand the <ins>power and simplicity of Python dictionaries</ins>**. So much is actually happening **when you type <ins>d = {'a': 1, 'b': 2}</ins>,** but everything looks so simple for the user. <ins>**Python</ins> doesn’t use the exact same implementation** than the one you will work on today though. If you are curious on how it works under the hood, here is a <ins>**good blog post</ins>** about [how dictionaries are implemented in Python 2.7](https://intranet.alxswe.com/rltoken/hKhDFfKKcxdM9U8GZVPOHQ) (not mandatory).
<br>
> [!NOTE]
> Note that all dictionaries are not implemented using hash tables and there is a difference between a dictionary and a hash table.

* [Read more here](https://intranet.alxswe.com/rltoken/6wE80OFPwL-As1zGh2iMFg) (not mandatory).

![Python_Dictionaries]( https://media.geeksforgeeks.org/wp-content/uploads/Dictionary-Creation-1.jpg)
##

### **PROJECT_TITLE:** [**0x1A. C - Hash tables**](https://intranet.alxswe.com/projects/253#task-1253)

### **GITHUB_REPOSITORY:** 📂 [**alx-low_level_programming**](https://github.com/BekiHabesha/alx-low_level_programming/tree/master)

### **DIRECTORY:**  📂 [**0x1A-hash_tables**](https://github.com/BekiHabesha/alx-low_level_programming/tree/master/0x1A-hash_tables)

##

<p align="center">
  <img src="https://i.ibb.co/y5wmQyd/Alx-enginn-Build-ur-future.png" />
</p>

<H1 align="center"> <ins> PROJECT TASKS (Mandatory and Advanced)</ins>:floppy_disk:</H1>

<H1 align="center">MANDATORY_TASKS (From Task 0 to 9):cd:</h1>

## **No. 0. >>> ht = {}**:heavy_check_mark:
* **File:**
  * [**0-hash_table_create.c**](./0-hash_table_create.c)
###
* Write a **function** that creates <ins>**hash table</ins>.**
  * <ins>**Prototype</ins>:** [hash_table_t *hash_table_create(unsigned long int size);](./hash_tables.h)**
    * where <ins>**size</ins>** is the **size of the array**
  * <ins>**Returns</ins>** a **pointer to the newly created hash table**
  * If something <ins>**went wrong</ins>,** **your function should return <ins>NULL</ins>**

```js
BekiHabesha@ubuntu:~/0x1A. Hash tables$ cat 0-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    printf("%p\n", (void *)ht);
    return (EXIT_SUCCESS);
}


BekiHabesha@ubuntu:~/0x1A. Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-hash_table_create.c -o a

BekiHabesha@ubuntu:~/0x1A. Hash tables$ ./a 

0x238a010
BekiHabesha@ubuntu:~/0x1A. Hash tables$ valgrind ./a
==7602== Memcheck, a memory error detector
==7602== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
==7602== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
==7602== Command: ./a
==7602== 
0x51fc040
==7602== 
==7602== HEAP SUMMARY:
==7602==     in use at exit: 8,208 bytes in 2 blocks
==7602==   total heap usage: 2 allocs, 0 frees, 8,208 bytes allocated
==7602== 
==7602== LEAK SUMMARY:
==7602==    definitely lost: 16 bytes in 1 blocks
==7602==    indirectly lost: 8,192 bytes in 1 blocks
==7602==      possibly lost: 0 bytes in 0 blocks
==7602==    still reachable: 0 bytes in 0 blocks
==7602==         suppressed: 0 bytes in 0 blocks
==7602== Rerun with --leak-check=full to see details of leaked memory
==7602== 
==7602== For counts of detected and suppressed errors, rerun with: -v
==7602== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
BekiHabesha@ubuntu:~/0x1A. Hash tables$
```

##

## **No. 1. djb2**:heavy_check_mark:
* **File:**
  * [**1-djb2.c**](./1-djb2.c)
###
* Write a **hash function** implementing the <ins>**djb2 algorithm</ins>.**
  * <ins>**Prototype</ins>:** *[unsigned long int hash_djb2(const unsigned char *str);](./hash_tables.h)
  * If something <ins>**went wrong</ins>,** **your function should return <ins>NULL</ins>**
You are <ins>**allowed to copy and paste</ins>** the **function** from [this page](https://intranet.alxswe.com/rltoken/3B7lCUBD4yZh66Pbl2KcEQ)

```js
BekiHabesha@ubuntu:~/0x1A. Hash tables$ cat 1-djb2.c 
unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash;
    int c;

    hash = 5381;
    while ((c = *str++))
    {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }
    return (hash);
}
BekiHabesha@ubuntu:~/0x1A. Hash tables$ 
BekiHabesha@ubuntu:~/0x1A. Hash tables$ cat 1-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    char *s;

    s = "cisfun";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    s = "Don't forget to tweet today";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    s = "98";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    return (EXIT_SUCCESS);
}

BekiHabesha@ubuntu:~/0x1A. Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-djb2.c -o b

BekiHabesha@ubuntu:~/0x1A. Hash tables$ ./b 
6953392314605
3749890792216096085
5861846
BekiHabesha@ubuntu:~/0x1A. Hash tables$ 
```

##

## **No. 2. key -> index**:heavy_check_mark:
* **File:**
  * [**2-key_index.c**](./2-key_index.c)
###
* Write a **function** that gives you the <ins>**index of a key</ins>.**
  * <ins>**Prototype</ins>:** [unsigned long int key_index(const unsigned char *key, unsigned long int size);](./hash_tables.h)
    * where <ins>**key</ins>** is the **key**
    * and <ins>**size</ins>** is the **size of the array of the hash table**
  * This **function** should use the **hash_djb2 <ins>function</ins> that you <ins>wrote earlier</ins>**
  * <ins>**Returns</ins>** the **index at which the key/value pair** should be **stored in the <ins>array of the hash table</ins>.**
  * <ins>**You will have to use this hash function for all the next tasks</ins>.**

```js
BekiHabesha@ubuntu:~/0x1A. Hash tables$ cat 2-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    char *s;
    unsigned long int hash_table_array_size;

    hash_table_array_size = 1024;
    s = "cisfun";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));
    s = "Don't forget to tweet today";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));
    s = "98";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));  
    return (EXIT_SUCCESS);
}

BekiHabesha@ubuntu:~/0x1A. Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 1-djb2.c 2-key_index.c -o c

BekiHabesha@ubuntu:~/0x1A. Hash tables$ ./c 
6953392314605
237
3749890792216096085
341
5861846
470
BekiHabesha@ubuntu:~/0x1A. Hash tables$ 
```

##

## **No. 3. >>> ht['betty'] = 'cool'**:heavy_check_mark:
* **File:**
  * [**3-hash_table_set.c**](./3-hash_table_set.c)
###
* Write a **function** that <ins>**adds an element to the hash table</ins>.**
  * <ins>**Prototype</ins>:** [int hash_table_set(hash_table_t *ht, const char *key, const char *value);](./hash_tables.h)
    * where <ins>**ht</ins>** is the **<ins>hash table</ins> you want to <ins>add or update the key/value to**</ins>
    * <ins>**key</ins>** is the **key.** <ins>**key</ins>** can not be an **empty string.**
    * and <ins>**value</ins>** is the **value associated with the key.** <ins>**value</ins>** must be **duplicated.** <ins>**value</ins>** can be an **empty string.**
  * This **function** should use the **hash_djb2 <ins>function</ins> that you <ins>wrote earlier</ins>**
  * <ins>**Returns</ins>:** **<ins>1</ins> if it succeeded, <ins>0</ins> otherwise**
  * **In case of collision, <ins>add the new node at the beginning of the list</ins>.**

```js
BekiHabesha@ubuntu:~/0x1A. Hash tables$ cat 3-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    return (EXIT_SUCCESS);
}

BekiHabesha@ubuntu:~/0x1A. Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c -o d

BekiHabesha@ubuntu:~/0x1A. Hash tables$
```
<br>

#### <ins>**If you want to test for collisions</ins>, here are some <ins>strings</ins> that <ins>collide</ins> using the <ins>djb2 algorithm</ins>:**

* <ins>**hetairas</ins>** collides with **mentioner.**
* <ins>**heliotropes</ins>** collides with **neurospora.**
* <ins>**depravement</ins>** collides with **serafins.**
* <ins>**stylist</ins>** collides with **subgenera.**
* <ins>**joyful</ins>** collides with **synaphea.**
* <ins>**redescribed</ins>** collides with **urites.**
* <ins>**dram</ins>** collides with **vivency.**

##

## **No. 4. >>> ht['betty']**:heavy_check_mark:
* **File:**
  * [**4-hash_table_get.c**](./4-hash_table_get.c)
###
* Write a **function** that <ins>**retrieves a value associated with a key</ins>.**
  * <ins>**Prototype</ins>:** [char *hash_table_get(const hash_table_t *ht, const char *key);](./hash_tables.h)
    * where <ins>**ht</ins>** is the **<ins>hash table</ins> you want to <ins>look into**</ins>
    * and <ins>**key</ins>** is the **key you are** <ins>**looking for</ins>.**
  * <ins>**Returns</ins>:** **the <ins>value associated</ins> with the <ins>element</ins>, or <ins>NULL</ins> if <ins>key</ins> couldn’t be found**

```js
BekiHabesha@ubuntu:~/0x1A. Hash tables$ cat 4-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    char *value;

    ht = hash_table_create(1024);
    hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Bob", "and Kris love asm");
    hash_table_set(ht, "N", "queens");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Cool");
    hash_table_set(ht, "98", "Battery Street");
    hash_table_set(ht, "c", "isfun");

    value = hash_table_get(ht, "python");
    printf("%s:%s\n", "python", value);
    value = hash_table_get(ht, "Bob");
    printf("%s:%s\n", "Bob", value);
    value = hash_table_get(ht, "N");
    printf("%s:%s\n", "N", value);
    value = hash_table_get(ht, "Asterix");
    printf("%s:%s\n", "Asterix", value);
    value = hash_table_get(ht, "Betty");
    printf("%s:%s\n", "Betty", value);
    value = hash_table_get(ht, "98");
    printf("%s:%s\n", "98", value);
    value = hash_table_get(ht, "c");
    printf("%s:%s\n", "c", value);
    value = hash_table_get(ht, "javascript");
    printf("%s:%s\n", "javascript", value);
    return (EXIT_SUCCESS);
}

BekiHabesha@ubuntu:~/0x1A. Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c -o e

BekiHabesha@ubuntu:~/0x1A. Hash tables$ ./e 
python:awesome
Bob:and Kris love asm
N:queens
Asterix:Obelix
Betty:Cool
98:Battery Street
c:isfun
javascript:(null)
BekiHabesha@ubuntu:~/0x1A. Hash tables$ 
```

##

## **No. 5. >>> print(ht)**:heavy_check_mark:
* **File:**
  * [**5-hash_table_print.c**](./5-hash_table_print.c)
###
* Write a **function** that <ins>**prints a hash table</ins>.**
  * <ins>**Prototype</ins>:** [void hash_table_print(const hash_table_t *ht);](./hash_tables.h)
    * where <ins>**ht</ins>** is the **<ins>hash table</ins>.**
  * You should **print the <ins>key/value</ins> in the order that they appear in the <ins>array of hash table</ins>.**
    * <ins>**Order</ins>:** **array, list.** 
  * <ins>**Format</ins>:** **see example.**
  * If <ins>**ht</ins>** is **<ins>NULL</ins>, don’t print anything**

```js
BekiHabesha@ubuntu:~/0x1A. Hash tables$ cat 5-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_print(ht);
    hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Bob", "and Kris love asm");
    hash_table_set(ht, "N", "queens");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Cool");
    hash_table_set(ht, "98", "Battery Street");
    hash_table_print(ht);
    return (EXIT_SUCCESS);
}

BekiHabesha@ubuntu:~/0x1A. Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c -o f

BekiHabesha@ubuntu:~/0x1A. Hash tables$ ./f 
{}
{'Betty': 'Cool', 'python': 'awesome', 'Bob': 'and Kris love asm', '98': 'Battery Street', 'N': 'queens', 'c': 'fun', 'Asterix': 'Obelix'}
BekiHabesha@ubuntu:~/0x1A. Hash tables$ 
```

##

## **No. 6. >>> del ht**:heavy_check_mark:
* **File:**
  * [**6-hash_table_delete.c**](./6-hash_table_delete.c)
###
* Write a **function** that <ins>**deletes a hash table</ins>.**
  * <ins>**Prototype</ins>:** [void hash_table_delete(hash_table_t *ht);](./hash_tables.h)

```js
BekiHabesha@ubuntu:~/0x1A. Hash tables$ cat 6-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    char *key;
    char *value;

    ht = hash_table_create(1024);
    hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Bob", "and Kris love asm");
    hash_table_set(ht, "N", "queens");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Cool");
    hash_table_set(ht, "98", "Battery Streetz");
    key = strdup("Tim");
    value = strdup("Britton");
    hash_table_set(ht, key, value);
    key[0] = '\0';
    value[0] = '\0';
    free(key);
    free(value);
    hash_table_set(ht, "98", "Battery Street"); 
    hash_table_set(ht, "hetairas", "Bob");
    hash_table_set(ht, "hetairas", "Bob Z");
    hash_table_set(ht, "mentioner", "Bob");
    hash_table_set(ht, "hetairas", "Bob Z Chu");
    hash_table_print(ht);
    hash_table_delete(ht);
    return (EXIT_SUCCESS);
}

BekiHabesha@ubuntu:~/0x1A. Hash tables$ gcc -Wall -pedantic -Werror -Wextra 6-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c 6-hash_table_delete.c -o g

BekiHabesha@ubuntu:~/0x1A. Hash tables$ valgrind ./g
==6621== Memcheck, a memory error detector
==6621== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
==6621== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
==6621== Command: ./g
==6621== 
{'Betty': 'Cool', 'mentioner': 'Bob', 'hetairas': 'Bob Z Chu', 'python': 'awesome', 'Bob': 'and Kris love asm', '98': 'Battery Street', 'N': 'queens', 'c': 'fun', 'Tim': 'Britton', 'Asterix': 'Obelix'}
==6621== 
==6621== HEAP SUMMARY:
==6621==     in use at exit: 0 bytes in 0 blocks
==6621==   total heap usage: 37 allocs, 37 frees, 8,646 bytes allocated
==6621== 
==6621== All heap blocks were freed -- no leaks are possible
==6621== 
==6621== For counts of detected and suppressed errors, rerun with: -v
==6621== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
BekiHabesha@ubuntu:~/0x1A. Hash tables$ 
```

#

<h1 align="center"> ADVANCED_TASKS (Task 7):cd:</h1>

## **No. 7. $ht['Betty'] = 'Cool'**:heavy_check_mark:
* **File:**
  * [**100-sorted_hash_table.c**](./100-sorted_hash_table.c)
###
* In [PHP](https://intranet.alxswe.com/rltoken/UoWjDMSf7CR02W8bnn1geg),  hash tables are <ins>**ordered</ins>.** **Wait… WAT? <ins>How is this even possible?</ins>**<br>
<p align="center">
  <img src="https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2020/9/5ebbea5dea5a575b38243d597604000715982925.gif?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20231222%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20231222T152706Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=55ee3a2406fe6e8c214675a52901c2a644a5cb904599d61885fd200102aa8ace" />
</p>
###
* <ins>**Before you continue</ins>, please take a moment to think about it: <ins>how you would implement it</ins> if you were <ins>asked to during an interview or a job</ins>. What <ins>data structures would you use</ins>? <ins>How would it work</ins>?**

###

### **<ins>For this task</ins>, please:**
* Read [PHP Internals Book: HashTable](https://intranet.alxswe.com/rltoken/SIdpN9PE_9aYBCHUGPX-fw)
* Use the <ins>**same hash function</ins>**
* Use these <ins>**data structures</ins>:**

```js
/**
 * struct shash_node_s - Node of a sorted hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 * @sprev: A pointer to the previous element of the sorted linked list
 * @snext: A pointer to the next element of the sorted linked list
 */
typedef struct shash_node_s
{
     char *key;
     char *value;
     struct shash_node_s *next;
     struct shash_node_s *sprev;
     struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Sorted hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 * @shead: A pointer to the first element of the sorted linked list
 * @stail: A pointer to the last element of the sorted linked list
 */
typedef struct shash_table_s
{
     unsigned long int size;
     shash_node_t **array;
     shash_node_t *shead;
     shash_node_t *stail;
} shash_table_t;
```

###

### **<ins>Rewrite the previous functions using these data structures</ins>:**
* [shash_table_t *shash_table_create(unsigned long int size);](./hash_tables.h)
* [int shash_table_set(shash_table_t *ht, const char *key, const char *value);](./hash_tables.h)
  * The <ins>**key/value pair</ins>** should be <ins>**inserted</ins>** in the <ins>**sorted list at the right place</ins>.**
  * **Note** that here we do not want to do **exactly like <ins>PHP<ins>:** we want to <ins>**create a sorted linked list<ins>,** by **key (<ins>sorted on ASCII value)<ins>,** that we can <ins>**print by traversing it<ins>.** See example.
* [char *shash_table_get(const shash_table_t *ht, const char *key);](./hash_tables.h)
* [void shash_table_print(const shash_table_t *ht);](./hash_tables.h)
  * Should <ins>**print the hash table</ins>** using the **sorted linked list.**
* [void shash_table_print_rev(const shash_table_t *ht);](./hash_tables.h)
  * Should <ins>**print the hash tables key/value pairs</ins>** in <ins>**reverse order</ins>** using the **sorted linked list.**
* [void shash_table_delete(shash_table_t *ht);(./hash_tables.h)
* **You are <ins>allowed to have more than 5 functions</ins> in your file.**


```js
BekiHabesha@ubuntu:~/0x1A. Hash tables$ cat 100-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    shash_table_t *ht;

    ht = shash_table_create(1024);
    shash_table_set(ht, "y", "0");
    shash_table_print(ht);
    shash_table_set(ht, "j", "1");
    shash_table_print(ht);
    shash_table_set(ht, "c", "2");
    shash_table_print(ht);
    shash_table_set(ht, "b", "3");
    shash_table_print(ht);
    shash_table_set(ht, "z", "4");
    shash_table_print(ht);
    shash_table_set(ht, "n", "5");
    shash_table_print(ht);
    shash_table_set(ht, "a", "6");
    shash_table_print(ht);
    shash_table_set(ht, "m", "7");
    shash_table_print(ht);
    shash_table_print_rev(ht);
        shash_table_delete(ht);
    return (EXIT_SUCCESS);
}

BekiHabesha@ubuntu:~/0x1A. Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-sorted_hash_table.c 1-djb2.c 2-key_index.c -o sht  

BekiHabesha@ubuntu:~/0x1A. Hash tables$ ./sht 
{'y': '0'}
{'j': '1', 'y': '0'}
{'c': '2', 'j': '1', 'y': '0'}
{'b': '3', 'c': '2', 'j': '1', 'y': '0'}
{'b': '3', 'c': '2', 'j': '1', 'y': '0', 'z': '4'}
{'b': '3', 'c': '2', 'j': '1', 'n': '5', 'y': '0', 'z': '4'}
{'a': '6', 'b': '3', 'c': '2', 'j': '1', 'n': '5', 'y': '0', 'z': '4'}
{'a': '6', 'b': '3', 'c': '2', 'j': '1', 'm': '7', 'n': '5', 'y': '0', 'z': '4'}
{'z': '4', 'y': '0', 'n': '5', 'm': '7', 'j': '1', 'c': '2', 'b': '3', 'a': '6'}
BekiHabesha@ubuntu:~/0x1A. Hash tables$ 
```

###

![Beki Habesha.]( https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/253/php.png)

#
