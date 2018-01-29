/* This is the basic component. */
let component = ReasonReact.statelessComponent("Page");

let crowns = 200;

let crownsForOneDollar = 25.4;

let dollars = float_of_int(crowns) /. crownsForOneDollar;

let crownsToForeignCurrency = (crownsPerUnit, crowns) => float_of_int(crowns) /. crownsPerUnit;

let dollars2 = crownsToForeignCurrency(crownsForOneDollar, crowns);

let crownsToDollars = crownsToForeignCurrency(crownsForOneDollar);

let dollars3 = crownsToDollars(crowns);

let f = (a, b, c) => Js.log(a ++ b ++ c);

let f = (a, b, c) => Js.log(a ++ b ++ c);

let g = f("Acko");

let g2 = (b, c) => Js.log("Acko" ++ b ++ c);

let g3 = (b, c) => Js.log("Acko" ++ b ++ c);

f("a", "b", "c");

f("a", "b", "c");

f("a", "b", "c");

f("a", "b", "c");

let dollars4 = crownsToForeignCurrency(25.4, 200);

let crownsToForeignCurrency2 = (~crownsPerUnit, crowns) => float_of_int(crowns) /. crownsPerUnit;

let dollars5 = crownsToForeignCurrency2(~crownsPerUnit=25.4, 200);

/* Your familiar handleClick from ReactJS. This mandatorily takes the payload,
   then the `self` record, which contains state (none here), `handle`, `reduce`
   and other utilities */
let handleClick = (_event, _self) => Js.log("clicked!");

/* `make` is the function that mandatorily takes `children` (if you want to use
   `JSX). `message` is a named argument, which simulates ReactJS props. Usage:

   `<Page message="hello" />`

   Which desugars to

   `ReasonReact.element(Page.make(~message="hello", [||]))` */
let make = (~message, _children) => {
  ...component,
  render: (self) =>
    <div onClick=(self.handle(handleClick))>
      (ReasonReact.stringToElement(message))
      (ReasonReact.stringToElement({j|BTW $crowns CZK is equal to $dollars5 USD!|j}))
    </div>
};
