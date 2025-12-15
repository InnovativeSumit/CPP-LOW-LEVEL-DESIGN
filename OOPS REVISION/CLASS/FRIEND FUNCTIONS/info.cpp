// IMPORTANT PROPERTIES OF FRIEND FUNCTIONS
// ----------------------------------------
//
// 1. A friend function is NOT a member of the class.
//    It is defined outside the class but has access to
//    the class's private and protected data.
//
// 2. Friend functions are declared inside the class
//    using the keyword 'friend', but they are called
//    like normal functions (not using object.function()).
//
// 3. Since a friend function is not a class member,
//    it does NOT have a 'this' pointer.
//
// 4. Friend functions can access private data of the class
//    directly without using getter/setter functions.
//
// 5. A function can be a friend of multiple classes.
//
// 6. Friendship is NOT mutual.
//    If class A is a friend of class B, then
//    class B is NOT automatically a friend of class A.
//
// 7. Friendship is NOT inherited.
//    Friend functions of a base class do NOT become
//    friends of the derived class.
//
// 8. Friend functions help when operator overloading
//    or when two or more objects need to be accessed together.
//
// 9. Friend functions break data hiding if overused,
//    so they should be used carefully.
//
// 10. Friend functions improve readability in cases where
//     external functions logically operate on class objects.
