;---
; Excerpted from "The Cucumber for Java Book",
; published by The Pragmatic Bookshelf.
; Copyrights apply to this code. It may not be used to create training material, 
; courses, books, articles, and the like. Contact us if you are in doubt.
; We make no guarantees that this code is fit for any purpose. 
; Visit http://www.pragmaticprogrammer.com/titles/srjcuc for more book information.
;---
(require '[checkout.checkout :refer :all])

(load-file "src/test/clojure/checkout/world.clj")

(When #"^I scan a \"(.*?)\"$" [item-name]
      (swap! cart scan @price-list item-name))

(Then #"^the total is (\d+)c$" [expected-total]
      (assert-equals (force-long expected-total) (checkout @cart)))