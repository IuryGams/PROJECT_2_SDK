#pragma once

#include "energy_meter.hpp"

namespace ees
{
    class Operations
    {
    private:
        std::vector<EnergyMeter> meter_list;
    public:
        Operations();
        void add_new_meter(const EnergyMeter &meter);
        auto get_meter_list() -> std::vector<EnergyMeter>;
        void read_meter_list();
        auto filter_by_line(std::vector<EnergyMeter> &energy_meters, const Lines &line) -> std::vector<EnergyMeter>;
        void delete_line_by_id(std::vector<EnergyMeter> &meters, int &id);
        void add_model_to_line(std::vector<EnergyMeter> &energy_meters, const Lines &line, const std::string &model);
    };
    
} // namespace ees