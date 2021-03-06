#---
# Excerpted from "Seven Mobile Apps in Seven Weeks",
# published by The Pragmatic Bookshelf.
# Copyrights apply to this code. It may not be used to create training material,
# courses, books, articles, and the like. Contact us if you are in doubt.
# We make no guarantees that this code is fit for any purpose.
# Visit http://www.pragmaticprogrammer.com/titles/7apps for more book information.
#---
class ReverseGeocodeController < ActionController::Base

  def reverse_geocode
    @geocode_response = ReverseGeocodeRequest.for(params[:lat], params[:long])
    render "reverse_geocode/reverse_geocode"
  end

end
