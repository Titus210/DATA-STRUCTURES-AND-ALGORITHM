function minRefuelingStops(distances) {
  const n = distances.length; // calculate total no of elements in array

  let refueling_stops = 0; // number of stops to refuel
  let current_position = 0; // current position of vehicle
  let max_distance_to_refuel = 200; // distance that car can cover to refil next

  /* Loop through the list of stations */
  for (let i = 0; i < n - 1; i++) {
    const distance_to_next_station = distances[i + 1] - current_position;

    // check if distance to next stop is greater than max distance car can cover from current position
    if (distance_to_next_station > max_distance_to_refuel) {
      // vehicle cannot reach next station without remaining fuel
      refueling_stops++; // increment no of stops made
      max_distance_to_refuel = 200; // reset the max distance to next stop to 200 i.e full tank
    }
    max_distance_to_refuel -= distance_to_next_station; // get next fuel distance by subtracting it by next distance
    current_position = distance_to_next_station[i + 1]; // increment the current_position to next petrol station
  }

  // check ifdistance is reachable from the last fuel station
  if (distances[n - 1] - current_position > max_distance_to_refuel)
    return Infinity;
  return refueling_stops;
}

console.log(minRefuelingStops([0,80,180,250,400,520]))