Readme.md
# You can think of the readme as a resume of this beautiful article :

https://zainab-dnaya.medium.com/fastest-push-swap-algorithm-2f510028602b


* We have a list of numbers from [1-100] unsorted in stack A

* Put them in array (Converting from linkedlist into array)

* Then sort them in the array (I used selection sort)

* In your sorted array select a pivot or a key-nbr in this case i've got 100 numbers i've decided to divide the stack into 4 parts (each part have 25 nbr)

* Now our 3 key numbers are going to be :

  a = 25

  b = 50

  c = 75

* Why 3 and not 4 because the last part i'm going to find the min value in the the stack and push it into stack B

* As you see the stack unsorted btu i'll simplify and minimize the number of instructions, How ?

* Well now we're going to find max value in stack B and push it back to stack by

      size = ft_nodesize(stack_b);
      while (size)
      {
        max = find_max(stack_b);
        idx = get_index(stack_b, max);
        if (idx <= size / 2)
        {
          n = idx - 1;
          while (n-- > 0)
            rotate_b(stack_b);
        }
        else
        {
          n = size - idx + 1;
          while (n-- > 0)
            reverse_rotate_b(stack_b);
        }
        push_a(stack_a, stack_b);
        size--;
      } 
