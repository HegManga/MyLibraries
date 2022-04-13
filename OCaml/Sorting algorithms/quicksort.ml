(*
ls:int list for now
*)
let quicksort ls = 
  let rec pivot lis p res=
    match (lis,res) with
    |(h::t,(l,r)) when h >= p -> pivot t p (l,h::r)
    |(h::t,(l,r)) when h < p -> pivot t p (h::l,r)
    |([],_)-> res
  and qsort list =
    match list with
    |[]-> list
    |[x] -> list
    |h::t -> 
        let (lp,rp) = pivot list h ([],[])
        in let qr = qsort rp
        in let ql = qsort lp
        in List.append ql qr 
  in 
  qsort ls;;
