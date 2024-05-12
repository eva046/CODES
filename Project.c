/*Student Info Management Program*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// To keep track of the number of students
int i = 0;

// A structure to store the student details
struct StudentInfo
{
   char first_name[20];//declaring string to store 1st names
   char last_name[20];//declaring string to store last names
   int roll;//declaring integer to store roll
   float CGPA;//declaring float to store CGPA
   int course_id[5];//declaring array of integer to store 5 course ID together
} st[500];/*st[500] is an array where each element is a part of struct StudentInfo,
 and we can access the individual elements to get or set information about each student.
 For example, st[0] represents the first student, st[1] represents the second student,
  and so on, up to st[499] for the 500th student.So st[500] means we can store 501
  student info. We used array to take a union of data as structure */

// Function to add student details task (using function to perform every task)
void AddStudent()
{
   printf(">>>Add the Student's Details:-\n\n");
   printf("Enter the first name of the student\n-");
   scanf("%s", st[i].first_name);
   /*here input will be saved in i-th element or st[i] of the array of structure
   struct StudentInfo. Here (.) is the member access operator in C. It is used to
    access first_name of StudentInfo structure */
   printf("Enter the last name of the student\n-");
   scanf("%s", st[i].last_name);
   /*here input will be saved in i-th element or st[i] of the array of structure
   struct StudentInfo. Here (.) is the member access operator in C. It is used to
    access last_name of StudentInfo structure */
   printf("Enter the roll number of the student\n-");
   scanf("%d", &st[i].roll);
   /*here input will be saved in i-th element or st[i] of the array of structure
   struct StudentInfo. Here (.) is the member access operator in C. It is used to
    access roll of StudentInfo structure */
   printf("Enter the CGPA of the student\n-");
   scanf("%f", &st[i].CGPA);
   /*here input will be saved in i-th element or st[i] of the array of structure
   struct StudentInfo. Here (.) is the member access operator in C. It is used to
    access CGPA of StudentInfo structure */
   printf("Enter the course ID of each course of the student\n");
   for (int j = 0; j <5; j++)
   {//loop for taking 5 course_id input and store them in array
      scanf("%d", &st[i].course_id[j]); //used j for taking and storing 5 ids
   }//every time course id is entered it will be stored in course_id[j]
   i = i + 1;
   /*after taking one student details i student number will increase to 1
   from 0 meaning after adding 1 student details we have 1 student's details*/
   printf("The entered student's record added successfully!!!\n\n\n");
}

// Function to find the students using roll number task.
void FindByRollNumber()
{//declaring temp where roll will be input from user
   int temp;
   printf(">>>Find By The Roll Number:-\n\n");
   printf("Enter the roll number of the student\n-");
   scanf("%d", &temp);
   for (int j = 0; j < i; j++)
   {
  /*We used loop to compare inputed roll with all the other student's roll in list
  so this loop will go on till j is bigger than i cuz i is the highest or total student number.
  we use j for checking and counting every student's roll in a loop.we stored roll
   numbers in roll. So when temp roll is given then it will be compared to all the rolls
   of the roll list and if j is st[j].roll is matched with temp then we will find the ans.
   here we store rolls in array called roll not st[i].roll here st[i] roll represents
   i-th student's roll*/
      if (temp == st[j].roll)
      {//if temp is matched with roll from list which is j-th
         printf("The student's details are---\n");
         printf("The first name is - %s\n", st[j].first_name);
         printf("The last name is - %s\n", st[j].last_name);
         printf("The CGPA is - %0.3f\n", st[j].CGPA);
         printf("The enrolled course Ids are - ");
         for (int k = 0; k < 5; k++)
         {//using loop to print all the codes that are store in course_id array
            printf("%d ", st[j].course_id[k]);
         }//k is used for using this loop
         printf("\n\n\n");
         return;
      }
     return;
   }

}

// Function to find the student by the first name task
void FindByName()
{//declaring temp string to take input 1st name from user.
   char temp[20];
   printf(">>>Find By The First Name:-\n\n");
   printf("Enter the First Name of the Student\n-");
   scanf("%s", temp);
/*using loop to match temp with all the students name of the list.
here i is the total or highest student number . but j starts from
0 it means checking will be start from st[i]=0 of array of struct*/
   for (int j = 0; j < i; j++)
   {
      if (!strcmp(st[j].first_name, temp))
      {/*If strcmp(st[j].first_name, temp) returns 0 (then strings are equal),
          the condition is false, and the code inside the if block is not executed.
          So we use ! (Logical Not operator to make it true !0=1 so that the block
         statements inside if block is executed*/
         printf("The student's details are---\n");
         printf("The first name is - %s\n", st[j].first_name);
         printf("The last name is - %s\n", st[j].last_name);
         printf("The CGPA is - %0.3f\n", st[j].CGPA);
         printf("The enrolled course Ids are - ");
         for (int k = 0; k < 5; k++)
         {
            printf("%d ", st[j].course_id[k]);
         }
         printf("\n\n\n");
      }
   }
return;
}

// Function to find students enrolled in a specific course task
void FindRegisteredStudent()
{//declaring temp integer to take input ids from user.
   int temp;
   printf(">>>Find By The Course Id:-\n\n");
   printf("Enter the course ID\n");
   scanf("%d", &temp);
/*using 1st loop to match temp with all the students courses ids of the list.
here i is the total or highest student number . but j starts from
0 it means checking will be start from st[i]=0 of array of struct means this
loop will check the the students id till i(highest or total students)*/
   for (int j = 0; j < i; j++)
   {/*using 2nd loop to match those 5 course ids (inputed using loop) with
       temp here in j-th StudentInfo temp will check every input of
       course_id array that's we used another loop to match all the
       5 id of array inside another structure of array*/
      for (int d = 0; d < 5; d++)
      {//d variable is used to execute 2nd loop
         if (temp == st[j].course_id[d])
         {//if temp is matched with any d-th course id among 5 others of j-th student
            printf("The student's details are--\n");
            printf("The first name is - %s\n", st[j].first_name);
            printf("The last name is - %s\n", st[j].last_name);
            printf("The CGPA is - %0.3f\n", st[j].CGPA);
            printf("The enrolled course Ids are - ");
            for (int k = 0; k < 5; k++)
            {// to print all the 5 courses
               printf("%d ", st[j].course_id[k]);
            }
            printf("\n\n\n");
         }
      }
   }
return;
}

// Function to print the total number of students task
void TotalCount()
{
   printf("The total number of students currently in the system is - %d\n", i);
}/* i is the highest value means total student number among
 those whose infos are given to the system*/

// Function to delete a Student info task
void DeleteStudent()
{//declaring temp where roll will be input from user whose info will be deleted
   int temp;
   printf(">>>Deleting Student Details info:-\n\n");
   printf("Enter the roll number of the student\n-");
   scanf("%d", &temp);
   for (int j = 0; j < i; j++)
   {//this loop will pair temp with the roll from the list search loop
      if (temp == st[j].roll)
      {//if the temp is match with j-th student roll then it will go for 2nd loop
    /*2nd loop = deletion loop in this loop j-th roll will be replaced by next roll
    & this loop is responsible for shifting all elements in the array one position
    to the left, starting from the index j (where the student to be deleted is located)*/
         for (int k = j; k < 499; k++)//need k for using this loop
         {//loop will start from jth number which will be deleted and will end inside of array
            st[k] = st[k + 1];
            /*here we are assigning data to st[k] of next student data st[k+1]
            like this we are shifting data of elements or of the structure
            one position left. 1st k=j which will be deleted will be replaced by next j+1=k+1.
            like this k will increase by 1 every time the loop continues and all the others data
            in the array will shift one position left.*/
         }
         i--;
         //lastly when 1 student info is deleted total student number i will decrease by 1
         printf("The entered student's record deleted successfully!!!\n\n\n");
//after the process the affirmative statement will be printed to ensure student record is deleted
      }
   }
return;
}

// Function to update a student's data task
void UpdateStudent()
{//declaring integer temp where roll will be input from user whose info will be updated
   int temp;
   printf(">>>Updating Student Details info:-\n\n");
   printf("Enter the roll number of the student\n-");
   scanf("%d", &temp);
   for (int j = 0; j < i; j++)
   {//loop for paring temp with jth roll from the list
      if (temp == st[j].roll)
      {//when temp will matched with j-th roll more choices will be given to choose
         printf("1. First Name\n"
                "2. Last Name\n"
                "3. Roll Number\n"
                "4. CGPA\n"
                "5. Courses\n");
         int c;
         scanf("%d", &c);
         //taking c input to follow the chosen choice of the list
         switch (c)
         {/*taking those data input of j which we want to update
             so we are simply replacing those info with the updated one*/
         case 1:
            printf("Enter the updated first name \n-");
            scanf("%s", st[j].first_name);//taking and replacing updated values
            break;
         case 2:
            printf("Enter the updated last name \n-");
            scanf("%s", st[j].last_name);//taking and replacing updated values
            break;
         case 3:
            printf("Enter the updated roll number \n-");
            scanf("%d", &st[j].roll);//taking and replacing updated values
            break;
         case 4:
            printf("Enter the updated CGPA \n-");
            scanf("%f", &st[j].CGPA);//taking and replacing updated values
            break;
         case 5:
            printf("Enter the updated list of courses: ");
            for (int k = 0; k < 5; k++)
            {//using this loop for taking  courses id in a loop
               scanf("%d", &st[j].course_id[k]);//taking and replacing updated values
            }
            break;
         default:
//if user give others choices then the given one it will show invalid and will take another choice
            printf("Invalid choice\n");
            return;
         }
         printf("Records updated successfully\n");
         return;
      }
   }
}

// Function to save student data to a file
void saveDataToFile() {
    const char *filename = "Data.txt"; // Set the filename to "Data.txt"
    FILE *file = fopen(filename, "w"); // Open the file in write mode

    if (file == NULL) {
        printf("Error opening file %s for writing\n", filename);
        return;
    }
    for (int j = 0; j < i; j++) {
        // Write the first name and last name
        fprintf(file, "Name = %s %s \n", st[j].first_name, st[j].last_name);

        // Write the roll number, CGPA, and course_id
        fprintf(file, " Roll = %d  CGPA = %0.2f\n Course codes:", st[j].roll, st[j].CGPA);
        for (int k = 0; k < 5; k++) {
            fprintf(file, " %d", st[j].course_id[k]);
        }
        fprintf(file, "\n");
    }

    fclose(file);
}

int main()
{/*this is the main function consists of all the task . here we will perform
    the tasks by simply calling them...(functions we used for completing task*/
  int taskToPerform;

   while (1)
   {//this is a infinite loop so it will end only with users' consent
      printf("\n\t\t\t\t    ----------------------------------------------------");
       printf("\n\t\t\t\t    ----------------------------------------------------");
      printf("\n");
      printf("\n\t\t\t\t\t|>|>|>| Student Database Management |<|<|<|\n");
      printf("\n");
       printf("\t\t\t\t    ----------------------------------------------------");
       printf("\n\t\t\t\t    ----------------------------------------------------\n");
       printf("\n\n");
      printf("1. Add a new Student Detail \t\t\t\t\t\n");
      printf("2. Find the details of a Student using Roll Number \n");
      printf("3. Find the details of a Student using the First Name \n");
      printf("4. Find the details of Students using the Course Id \n");
      printf("5. Find Total number of Students \n");
      printf("6. Delete the details of a Student \n");
      printf("7. Update the details of a Student \n");
      printf("8. Exit\n\n\n");
       printf("\nEnter the task that you want to perform\n-");
      scanf("%d", &taskToPerform);
//choosing which task user want to perfrom
      switch (taskToPerform)
      {
      case 1:
         AddStudent();
          saveDataToFile();//saving new data
         break;
      case 2:
         FindByRollNumber();
         break;
      case 3:
         FindByName();
         break;
      case 4:
         FindRegisteredStudent();
         break;
      case 5:
         TotalCount();
         break;
      case 6:
         DeleteStudent();
          saveDataToFile();//deleting saved data
         break;
      case 7:
         UpdateStudent();
          saveDataToFile();//saving updating data
         break;
      case 8:
          printf("Find all the information is Data.txt file!!!");
         return 0;
      default:
         printf("Invalid choice. Please try again.\n");
      }
   }

   return 0;
}


