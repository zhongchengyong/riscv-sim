# 设计实现笔记
## Expr的实现
> an object-oriented language wants you to orient your code along the rows of types. A functional language instead encourages you to lump each column’s worth of code together into functions

对于Expr的实现来说，  
如果基于OOP来实现，则将不同的visitor的实现放在某个Expr的子类中  
如果基于Visitor模式来实现，则实现在不同的visitor.accept()函数中  
这样的好处是，未来修改