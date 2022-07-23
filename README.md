# Sieve-of-Eratosthenes
find prime
find prime from integer 2 to another integer.
get an array,persume it has 100 element,and all the elements are TRUE (1).
The index of the element plays an important role in the code. 
check element's index to confirm it should be FALSE(0) or still be TRUE.
first,find the number can be divided with no remainder by integer 2 in the array;then 3,after 3 is 4,but we found 4 can be divided exactly by number 2,so we can just skip this number 
repeat this process till the last element.
if need print thos prime , just check it is true or not,and print its index. the index is the number.


设有数组num[100],num[0] = 2, num[1] = 3 ,依次类推。

先筛出能被2整除的数字，然后再次遍历数组筛出能被3整除的，接着是4，但是4已经被筛除，所以跳过，如此往复。

题目要求将所有数组元素设置为TRUE（1），非质数则将其重新赋值为FALSE。 

因此利用了数组下标作为计算的主体，然后查看该下标是否是质数，再通过对下标进行简单的运算，确定此次运算归属于哪个数组元素。

如果想要得知50000~51000，之间有多少个素数，可以通过修改SIZE ，在最后一段检测打印的部分，添加条件，I+2 > 50000 && i+2 < 51000,来获取当前区间的质数。问题是，中间将面临很多的无用运算。
