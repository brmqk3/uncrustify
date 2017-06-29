// Example for preprocessor statement in a function definition
// Config uses more than tested option, uses:
// pp_if_indent_code  = true      to enable preprocesser indent
// pp_indent_brace    = false     to override preprocessor indent for braces
MyClass::MyClass()
:mMember1
#if(USE_MEMBER)
,mConditionalMember
#endif
{
if(isSomething)
{
DoSomething();
}

#if(USE_FIVE)
{
DoSomethingAlso();
}
#endif

#if(USE_SIX)
{
Six mySix;
DoSomethingWithSix(mySix);
}
#endif
}