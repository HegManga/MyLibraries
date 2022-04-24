(*
NOW ls:int list 
*)
let quicksort_real ls = 
  let rec pivot lis p res=
    match (lis,res) with
    |(h::t,(l,c,r)) when h > p -> pivot t p (l,c,h::r)
    |(h::t,(l,c,r)) when h = p -> pivot t p (l,h::c,r)                              
    |(h::t,(l,c,r)) when h < p -> pivot t p (h::l,c,r)
    |([],_)-> res
  and qsort list =
    match list with
    |[]-> list
    |[x] -> list
    |h::t -> 
        let (lp,cp,rp) = pivot t h ([],[],[])
        in List.append (List.append (qsort (lp)) (h::cp)) (qsort rp)
  in 
  qsort ls
;;

(*
  cmp: 'a -> 'a -> 'int
  cmp is a partial order relation
    if a<b then -1 
       a=b then 0
       a>b then 1
*)
let quicksort cmp ls = 
  let rec pivot lis p res=
    match (lis,res) with
    |(h::t,(l,c,r)) when (cmp h p) > 0 -> pivot t p (l,c,h::r)
    |(h::t,(l,c,r)) when (cmp h p) = 0 -> pivot t p (l,h::c,r)                              
    |(h::t,(l,c,r)) when (cmp h p) < 0 -> pivot t p (h::l,c,r)
    |([],_)-> res
  and qsort list =
    match list with
    |[]-> list
    |[x] -> list
    |h::t -> 
        let (lp,cp,rp) = pivot t h ([],[],[])
        in List.append (List.append (qsort (lp)) (h::cp)) (qsort rp)
  in 
  qsort ls
;;
