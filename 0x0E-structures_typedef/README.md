## What are structures, when, why and how to use them

A structure in C is a user-defined data type that can be used to group items of possibly different types into a single type. The `struct` keyword is used to define the structure in the C programming language. The items in the structure are called its members and they can be of any valid data type.¹

Structures are useful when you want to store and manipulate data that are related but have different types. For example, you can use a structure to store information about a person, such as name, age, height, weight, etc.

To use structures, you need to follow these steps:

- Define the structure using the `struct` keyword and declare its members inside curly braces.
- Create variables of the structure type using the `struct` keyword and the structure name.
- Access the members of the structure using the dot operator (`.`) or the arrow operator (`->`) if you use pointers.

Here is an example of how to define and use a structure in C:

```c
// Define a structure named Person
struct Person {
    char name[50]; // member of type char array
    int age; // member of type int
    float height; // member of type float
};

int main() {
    // Create a variable of Person type
    struct Person p1;

    // Assign values to members of p1
    strcpy(p1.name, "Alice"); // use strcpy function to assign string value
    p1.age = 25;
    p1.height = 165.5;

    // Print values of members of p1
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Height: %.2f\n", p1.height);

    return 0;
}
```

Output:

```
Name: Alice
Age: 25
Height: 165.50
```

## How to use typedef in C

The `typedef` keyword is used to create an alias name for an existing data type. It is commonly used with structures to simplify the syntax of declaring variables.²

To use `typedef`, you need to follow this syntax:

```c
typedef existing_type new_type;
```

For example, you can use `typedef` to create a new name for `int` as `number`:

```c
typedef int number;
```

Now, you can use `number` as a data type instead of `int`:

```c
number x = 10; // same as int x = 10;
```

When using `typedef` with structures, you can either define the structure first and then create an alias name for it, or do both at the same time. For example:

```c
// Define a structure named Person
struct Person {
    char name[50];
    int age;
    float height;
};

// Create an alias name for struct Person as person
typedef struct Person person;

// Now you can use person as a data type instead of struct Person
person p1;
```

Or,

```c
// Define a structure named Person and create an alias name for it as person at the same time
typedef struct Person {
    char name[50];
    int age;
    float height;
} person;

// Now you can use person as a data type instead of struct Person
person p1;
```

Using `typedef` with structures can make your code more readable and consistent.

I hope this helps. 😊

¹: [C Structures - GeeksforGeeks](https://www.geeksforgeeks.org/structures-c/)
²: [C struct (Structures) - Programiz](https://www.programiz.com/c-programming/c-structures)

