Main Doc
========

Version
-------

The version of this library is version 0.0.1.

If this can't forward compatible, then it will change its name as a new
library.

Aim
---

``` txt
[.] write test file
[.] write main file and header file
    [x] int pg_is_inited(void)
    [.] int pg_init(void) => (code 1: success; code 0: fail)
            # initialize database
    [.] int pg_clear(void) => (code 1: success; code 0: fail)
            # delete(or clear) the datebase of Pigtime
    [.] struct PgNode
            # node structure
    [ ] int pg_empty(struct PgNode node) => (code 1: empty, code 0: is not
                                             empty)
            # check if the list of pgnode is empty
    [ ] PgNode* pg_get(const char* path) =>(code NULL: fail; code PgNode*:
                                            success)
            # get data node
            # pg_get("/") -> PgNode;
            # pg_read(pg_get("/peter.txt"), 't') -> const char*;
    [ ] const char* pg_read(PgNode node);
            # get the data of node
    [ ] int pg_insert(PgNode node) => (code 1: success; code 0: fail)
            # insert data node
    [ ] int pg_build() => (code 1: success; code 0: fail)
            # build and store database as a series of files
    [ ] int pg_load() => (code 1: success; code 0: fail)
            # load the existing database
-------------------------------------------------------------------------------
stand: ' ' -> '.' -> 'x'
```

Aim(For Version 0.0.1)
----------------------

The `Pigtime` provide the C-function as its interface. It can easily initialize
a new `Pigtime` database. It will hold a folder named `.pigtime` at the current
work folder.

That's why it need support:

- able to initialize a `Pigtime` database.
- able to delete it.
- able to check if here a `Pigtime` database.
- able to get a file by c-string like `"/temp.txt"`, `"/graph/temp.txt"`.
- echo of objects need a ID that differs with others.

Example
-------

It is easy for it to hold a complex relation of files. Such as a lot of notes:
You can get one note though `/time/2020-4-13/<name-of-file>` or 
`/tags/python/<name-of-file>` or `/tags/what_my_girl_like/<name-of-file>` or
some else. -- Just because this database is on graph but not tree! (oh man,
graph is complex but it do helpful if you use it carefully).

Or you can manager a message book, which have a lot of info that you can get by
`/messagebook/name/peter` or `/messagebook/sex/M/peter`(maybe there are a lot
of people named Peter, so need it return a list?)

Thinking Question
-----------------

(I do not think it should think now, it is important to make other think enable)

Question List:

- Do we need to wrap it with C++ STL structure? Such as
  `PgNodeList -> std::vector<PgNode>`

