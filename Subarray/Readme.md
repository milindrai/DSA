✅✅👉 If a subarray becomes valid again by adding left elements which were already deleted earlier but without deleting any rightmost element then it cant be solved by sliding window.

Then check if u need to just check all subarrays and subarrays are not dependent on adjacent subarrays i,e recursion then just run 2 loop 

eg: No of subarrays with lcm/gcd = k, Storing all subarrays in vector<vector<int>>

Else if subarray are dependent on adjacent subarray then do that problem using recursion.

eg: Substring with frequency of each character atleast k. acca & k=2.If we delete a & then go further then it agains become valid if we add a in cca.

Exception : Maths : Subarray with sum atleast k using deque

👉 Monotonically increasing: Each element is greater than previous one.

eg: 
    
    Sum/Prefix sum of pos array is always monotonically increasing
    
    To make sum /prefix sum of neg array we use deque
    
    We use stack for next greater element to store monotonically increasing element

👉 Count of subarray with k distinct elements = Count of subarray with (ATMOST k distinct element - ATMOST (k-1) distinct elements) i,e to loops are required o(2n)

👉 IF you need to pick either from left or right at each step there will subarray in middle so its a subarray prob.

👉 All subarray prob excepth this 4 types and printing are done by dp

👉 For hashing char to int : s[i]-'a' because a-'a'=0  Any character minus itself is 0 in coding except integers(never used).

👉 ◉ Since we dont intialize our map before loop we keep updating it in 1st line i,e in starting in our loop.

◉ We can also initialize our map before loop & then keep updating it in last line inside the loop. Loop will run till i=0 to i<n in both cases.

TO FIND ITERATOR OF SET & MAP SIMILAR TO VECTOR *i > *(i-1)
🤜

✅Always do hashing using map in variable size subarray. After that check if it could be done using vector<int>cnt.

✅Except these problems all other subarray problem solved by dp except printing all subarray
