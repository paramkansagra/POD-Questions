Goto Competiton or Not

A set of students of a college are getting prepared for an international coding competition ICPC conducted by ACM.

A college has appointed a coach and they will permit a student to the competition only if he approves

The coach has formulated a rule for approving a student.

He prepares ‘m’ number of schedules that consist of number of problems and a deadline. 

If a student has met atleast half of the deadline then he will be permitted to go for the competition (when the number of schedule is odd consider (m+1)/2 as half). 

Since he wanted the students work consistently he didn’t let the students to know the schedule. 

But students are lethargic and they solve some number of problems on a particular day and leaves a gap they are not working consistently each day. 

For example when there are two schedules given by the coach on 9th day 
the student must have completed 2 problems (9 2) and on 15th the student 
must have completed 7 problems (15, 7) and the student has worked on 
three days that is on 10th day he completes 5 problems, 14th day he 
completes 4 problems and 31st day he completes 1 problem then the 
student is allowed to participate the competition as he has met 
deadline of one schedule out of two

Given the detials of the schedule by the coach and number of problems solved by a student, write a C++ code to check if that student is allowed for the competition or not.

Input format

First line contains the number of schedules by the coach, m

Next ‘m’ lines contain the number of problems to be solved by the student and the deadline (day number) separated by a space

Next line contains the value of number of days the student works, n

Next ‘n’ lines contain the day number and the number of problems solved by the student separated by a space

Output Format

Print either Allowed or Denied