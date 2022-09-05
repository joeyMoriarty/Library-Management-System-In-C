# Library-Management-System-In-C
The following project is an attempt to create a library management system containing different features for both an user 
and an admin with a log in page segregating them. 

The details are as follows:

The above mentioned code “lib prac.c” is created on windows operating software using the dev C++ compiler.

When the code is compiled and run, it would ask for the user id of the user (which are hard coded in the code and feature for collection can be added). If the entered user id is incorrect then the system will inform the user that the entered user id is incorrect and they have 2 chances remaining. They will have a total of three chances to log in.
 When the user id entered matches with the hard coded user id then a menu is presented to the user with the following options:

1. Display: When this option is selected then the list of all the books along with their book id and no. Of copies available is shown on the screen ina tabular data.

2. Display user data: This option is made in order to see how many books the user is already holding and what are the book ids of those books. If the user is not holding any books then the count of the books would be 0 and no ids would be shown.

3. Acquire Book:  This option allows the user to acquire the book based on the id of the book which he has entered and this book is alloted to him and is save in the structure of the user data. This increases the data of the books no which he is holding and decreases the number of copies available for that book simultaneously. If the user reaches a maximum limit for the number of books he can hold then he won’t be abe 

4. Return Book: This Function allows the user to return the book which he has taken based on the book id which he enters. This will simultaneously increase the number of copies of book in the books structure and will reduce it from the users structure. 

5. Add Book: This option gives the user the option of adding a book with the books name the books I the books author name and the no of copies of the book user wants to add.

6. Remove Book: This option gives the user power to delete any book with all its details and when next time any other book is added then the book will be allotted in the same space which was deleted.

7. Exit: Helps the user to exit from the console

To check the code:

Enter user id from any of the following 
F100,S100,F200,S200

Now chose whatever function you wish to perform using the book id shown in the display function.


Code:

The code is initiated by taking a global variable so that we can use it in many of the loops which we would be requiring. Before that we have the basic libraries required for the functions which we are going to use. After that we define two basis structures for the book and the user. 

The Book structure consists of 5 arguments 1st is the title of the book 2nd is the author of the book third is the id of the book 4th is the integer which checks if the book is existing or not which we would be using in removal of the book. And the 5th is the number of copies of the book we have. The array of book structure can hold up to 10 books from which 5 are predefined for ease.

The User structure consists of user id of 10 characters book id which is an array of 3 strings of 10 characters as the user can have max 3 books which will be stored in this array. And the 3rd is the number of books the user is holding. Similarly we have put 4 predefined users.

The function which we come across next is the display function which basically prints the books available to the library in the table format using a for loop.

Display u is the function which displays the user data by taking the argument x from main function which has stored the user id of the user. The user id id compared and the one which matches with x is presented with all of its data.

Next is the return function This function also takes the argument x so that we don’t have to ask for username again and it asks the book id to be returned. Based on that we compare the structures (using string comparison and for loop) of books and the users and make necessary changes in both of them. 

The add functions doesn’t take any arguments as the user is already logged in. This function asks for the book name id author name etc and checks that which structure is empty by the use of variable exist if it is 0 then the books data is filled in that structure with string copy. And then it makes the existing variable to 1 so that that space is counted occupied.

Remove function completely removes by changing the existing variable to 0 and filling all the data by blanks. And then displays the complete list of available books.

Acquire This function takes arguments from main in form of char x as the user id then we display the available books so that we can provide options to the user. And we introduce integers flag j and k which we will be using in the multiple loops and flag will be used if the entered value of book id is incorrect then it remains 0 and we are presented with a screen stating that the entered boo id was wrong. If the entered book id is correct which is checked by running a loop, then flag is changed to 1 so that the error message is not displayed. Then we compare the uses index with x so that we can bring out necessary changes in the right structure. Then a check is made if he is allowed to take the books based on the limit if the limit exceeds then he presented with a message that limit is reached. Then each time a new book is added to a particular user then we check for which array of the book id from user is empty and we put the book id with increasing the total no of books he has.

Next is the log function which returns the value 1 if the login id is correct bases on the char x where log in id was saved in main.

Now the main function introduces functions welcome message user and books so that all that data gets saved already in order to access it after wards. Now here we have introduced the variable a based on which we provide the user 3 chances to log in using while. The user id is taken using the scan f function. And then switch function is used to provide the different functions which we already have defined above. And the x is used as an argument in log, acquire, display, and return as they are based on the user.
In the end if the user exhausts all his three chances then he is presented with a message and the console is closed.



