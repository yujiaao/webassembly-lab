(module
 (table 0 anyfunc)
 (memory $0 1)
 (export "memory" (memory $0))
 (export "main" (func $main))
 (func $main (; 0 ;) (param $0 i32) (param $1 i32) (result i32)
  (block $label$0
   (br_if $label$0
    (i32.lt_s
     (get_local $0)
     (i32.const 2)
    )
   )
   (br_if $label$0
    (i32.eqz
     (i32.load8_u
      (i32.load offset=4
       (get_local $1)
      )
     )
    )
   )
   (loop $label$1
    (br $label$1)
   )
  )
  (i32.load8_s offset=16
   (i32.const 0)
  )
 )
)
