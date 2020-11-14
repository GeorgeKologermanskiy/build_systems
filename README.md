# PatternsCollection
![CI](https://github.com/akhtyamovpavel/PatternsCollection/workflows/CI/badge.svg)
Кодовая база примеров паттернов проектирования по курсу "Технологии программирования, МФТИ"

## Содержание

* Порождающие паттерны:
  * [Factory Method](/FactoryMethod)
    * [C++](/FactoryMethod/cpp-source)
    * [Python](/FactoryMethod/python-source)
  * [Abstract Factory](/AbstractFactory)
    * [C++](/AbstractFactory/cpp-source)
    * [Python](/AbstractFactory/python-source)
  * [Builder](/Builder)
    * [C++](/Builder/cpp-source)
    * [Python](/Builder/python-source)
  * [Prototype](/Prototype)
    * [C++](/Prototype/cpp-source)
    * [Python](/Prototype/python-source)
* Структурные паттерны:
  * [Adapter](/Adapter)
    * [C++](/Adapter/cpp-source)
    * [Python](/Adapter/python-source)
  * [Bridge](/Bridge/cpp-source)
  * [Decorator](/Decorator/cpp-source)
  * [Composite](/Composite/cpp-source)
* Поведенческие паттерны:
  * [Observer](/Observer/cpp-source)
  * [Strategy](/Strategy/cpp-source)
  * [Chain of Responsibility](/ChainResponsibility/cpp-source)
  * [Command](/Command/cpp-source)
  * [Mediator](/Mediator/cpp-source)
  * [State](/State/cpp-source)
  * [Memento](/Memento/cpp-source)
  * [Visitor](/Visitor/cpp-source)

## Установка с нуля для разработчиков

Подтягиваем submodules:

git submodule init && git submodule update

Для сборки нужен любой C++ компилятор. Ставим boost:

cd boost

git submodule init && git submodule update

./bootstrap.sh --prefix=path/to/installation/prefix e.g. /usr/local/boost

./b2

./b2 install

Для сборки нужен любой C++ компилятор и perl. Ставим openssl:

cd openssl

git submodule init && git submodule update

./Configure.sh --prefix=path/to/installation/prefix e.g. /usr/local/openssl

make

make install

Для сборки нужен любой C++ компилятор и CMake. Ставим curl:

cd path/to/dst/curl e.g. /usr/local/curl

cmake path/to/src/curl e.g. build_systems/curl

make

make install

Для Decorator нужен еще gnutls и gsasl. Их не получилось подтянуть. Без декоратора все собирается.
