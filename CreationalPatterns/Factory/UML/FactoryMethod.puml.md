```plantuml
@startuml
'https://plantuml.com/class-diagram

abstract class Product
abstract class Creator{
-factoryMethod()
+anOperation()
}

class ConcreteCreator extends Creator{
-factoryMethod()
}
class ConcreteProduct extends Product{
}
ConcreteCreator .l.> ConcreteProduct
note top of Product
`<b>`The Factory Method Pattern`</b>` defines an interface for creating an object,
but lets subclasses decide which class to instantiate.
Factory Method lets a class defer instantiation to subclasses.
end note

abstract class Pizza
abstract class PizzaStore{
-CreatePizza()
+OrderPizza()
}

class NYPizzaStore extends PizzaStore{
-CreatePizza()
}

class ChicagoPizzaStore extends PizzaStore{
-CreatePizza()
}
class NYStyleCheesePizza extends Pizza{}
class NYStylePepperoniPizza extends Pizza{}
class ChicagoStyleCheesePizza extends Pizza{}
class ChicagoStylePepperoniPizza extends Pizza{}

NYPizzaStore ..> NYStyleCheesePizza
NYPizzaStore ..> NYStylePepperoniPizza

ChicagoPizzaStore ..> ChicagoStyleCheesePizza
ChicagoPizzaStore ..> ChicagoStylePepperoniPizza

'Pizza -[hidden]r-> PizzaStore

@enduml
```
