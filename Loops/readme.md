# The Concept of Loop
The loop in a program provides the fcaility to reapeat the set of<br>
instructions in a program. There are the following loop constructs <br>
that can be use in C program

- do ... while()
- while()
- for ()

1. **do ... while**  
                <p>This loop provides the facility to perfor the actions first, it<br>
                means the statements given in the body will be executed first and then<br>
                the condition will be tested at the bottom of the loop.<br>
                The instructions given in the body will be executed again & again <br>
                till the condition is satisfied. This loop is also known as bottom-tested loop<br>
                or exit control loop<br>
                <br>
                syntax:<br>
                  do {<rb>
                    statement-1;<br>
                    ...
                    statement-n;<br>
                  }while(condition);<br>
                <br>
                In cas of do while the statements given in the body will be executed minimum once<br>
                whether the condition is satisfied or not.<br>
                <br>
                *Note*: This loop is basically used for the purpose of data validation.<br>
                Problems: Q36, Q40<br>
                <br>
                </p>
2. **while** 
                <p>This loop is a top tested loop where the condition is tested at the top <br>
                of  the loop and the instructions given in the body will be executed till <br>
                the condition is satisfied.<br>
                <br>
                  ```
                  syntax:<br>
                  while(condition) {<br>
                    statement-1;<br>
                    ...
                    statement-n;<br>
                  }<br>
                    ```
                  <br>
                In this type of loop if the condition given by the user is not satisfied for the<br>
                first time then the loop will not be executed even once.<br>
                Problems: Q44
                </p>
      

