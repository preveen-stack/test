(println "temperature converter")

(defn f [c] (+ (* (/ 9.0 5.0) c) 32.0))
(defn c [f] (* (- f 32.0) (/ 5.0 9.0)))

(map (fn [msg] (println (f msg))) '(-40 0 25))
(map println '(-40 0 25))
(map c '(-40 0 98.6))
